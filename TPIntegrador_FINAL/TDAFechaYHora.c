#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "TDAFechaYHora.h"
#include "util.h"

int calcularDiaJuliano(int dia, int mes, int anio)
{
    return (1461 * (anio + 4800 + (mes - 14)/12))/4
           + (367 * (mes - 2 - 12 * ((mes - 14)/12)))/12
           - (3 * ((anio + 4900 + (mes - 14)/12)/100))/4 + dia - 32075;
}
//creacion y destruccion:
FechaPtr crearFecha(int dia,int mes,int anio,int hora,int minuto)
{
    FechaPtr f=(FechaPtr)obtenerMemoria(sizeof(Fecha));
    f->diaJuliano=calcularDiaJuliano(dia,mes,anio);

    f->hora=hora;
    f->minuto=minuto; ///Agregamos estas dos a la estructura antes de retornar f.

    return f;
}
///NUEVA: Orientada a crear fecha a partir de otra fecha (o si se parte de d. julianos) (utilizada en Files).
FechaPtr crearFechaDirect(int diaJuliano,int hora,int minuto)
{
    FechaPtr f = (FechaPtr)obtenerMemoria(sizeof(Fecha));
    f->diaJuliano=diaJuliano;
    f->hora=hora;
    f->minuto=minuto;

    return f;
}
FechaPtr destruirFecha(FechaPtr fecha) ///Esta no cambia.
{
    free(fecha);
    return NULL;
}
//getters:
///NUEVA
int getDiaJuliano(FechaPtr fecha)
{
    return fecha->diaJuliano;
}
int getDia(FechaPtr fecha)
{
    int j = fecha->diaJuliano;
    int f = j + 1401 + (((4 * j + 274277) / 146097) * 3) / 4 -38;
    int e = 4 * f + 3;
    int g = (e % 1461) / 4;
    int h = 5 * g + 2;
    return ((h % 153) / 5) + 1;
}
int getMes(FechaPtr fecha)
{
    int j = fecha->diaJuliano;
    int f = j + 1401 + (((4 * j + 274277) / 146097) * 3) / 4 -38;
    int e = 4 * f + 3;
    int g = (e % 1461) / 4;
    int h = 5 * g + 2;
    return ((h / 153 + 2) % 12) + 1;
}
int getAnio(FechaPtr fecha)
{
    int j = fecha->diaJuliano;
    int f = j + 1401 + (((4 * j + 274277) / 146097) * 3) / 4 -38;
    int e = 4 * f + 3;
    int g = (e % 1461) / 4;
    int h = 5 * g + 2;
    int mes =((h / 153 + 2) % 12) + 1;
    return (e / 1461) - 4716 + (12 + 2 - mes) / 12;
}
int getHora(FechaPtr fecha) ///NUEVA
{
    return fecha->hora;
}
int getMinuto(FechaPtr fecha) ///NUEVA
{
    return fecha->minuto;
}
///setters
///NUEVA
void setDiaJuliano(FechaPtr fecha,int diaJuliano)
{
    fecha->diaJuliano=diaJuliano;
}
void setDia(FechaPtr fecha,int dia)
{
    int d=getDia(fecha); //convertimos el dia juliano a dia gregoriano
    d=dia; //cambiamos el d�a antiguo por el nuevo
    int m=getMes(fecha);
    int a=getAnio(fecha); //para calcular el nuevo dia juliano tambien precisamos obtener el mes y anio
    int newDay=calcularDiaJuliano(d,m,a); //calculamos el nuevo d�a juliano llamando a la funcion
    fecha->diaJuliano=newDay; //seteamos el nuevo d�a calculado
}
void setMes(FechaPtr fecha,int mes)
{ //para el resto de setters es la misma logica
    int m=getMes(fecha);
    m=mes;
    int d=getDia(fecha);
    int a=getAnio(fecha);
    int newMonth=calcularDiaJuliano(d,m,a);
    fecha->diaJuliano=newMonth;
}
void setAnio(FechaPtr fecha,int anio)
{
    int a=getAnio(fecha);
    a=anio;
    int d=getDia(fecha);
    int m=getMes(fecha);
    int newYear=calcularDiaJuliano(d,m,a);
    fecha->diaJuliano=newYear;
}
void setHora(FechaPtr fecha,int hora) ///NUEVA
{
    fecha->hora=hora;
}
void setMinuto(FechaPtr fecha,int minuto) ///NUEVA
{
    fecha->minuto=minuto;
}
//Operaci�nes
int calcularDiferenciaFechas(FechaPtr fecha1,FechaPtr fecha2)
{//antes pod�a devolver una diferencia negativa, y eso no puede ser,
//ya que la diferencia entre dos n�meros es siempre positiva (m�dulo)
//hay que convertir los casos en donde da negativo, a positivo
    int diferencia=fecha1->diaJuliano - fecha2->diaJuliano;
    if((diferencia)<0)
    {
        return diferencia-(2*diferencia);
    }
    else
    {
        return diferencia;
    }
}
void traerFechaCorta(FechaPtr fecha,char *buffer)
{   //problema: no funciona con d�as o meses de 1 digito.
    //queremos que la longitud del string cambie si ocurre alguna de estas cosas.
    //si dia<10 entonces ponemos '/' un espacio antes, al igual que el resto de
    //caracteres sucesivos.
    //hacemos lo mismo si mes<10.

    if(getDia(fecha)<10 && getMes(fecha)<10) //las barras y el anio quedan 2 posiciones m�s adelante
    {
        sprintf(buffer,"%d",getDia(fecha));
        *(buffer +1)='/';
        sprintf(buffer+2,"%d",getMes(fecha));
        *(buffer +3)='/';
        sprintf(buffer+4,"%d",getAnio(fecha));
    }
    else if(getDia(fecha)<10) //de dia en adelante todo se corre 1 posicion
    {
        sprintf(buffer,"%d",getDia(fecha));
        *(buffer +1)='/';
        sprintf(buffer+2,"%d",getMes(fecha));
        *(buffer +4)='/';
        sprintf(buffer+5,"%d",getAnio(fecha));
    }
    else if (getMes(fecha)<10)//de mes en adelante todo se corre 1 posicion
    {
        sprintf(buffer,"%d",getDia(fecha));
        *(buffer +2)='/';
        sprintf(buffer+3,"%d",getMes(fecha));
        *(buffer +4)='/';
        sprintf(buffer+5,"%d",getAnio(fecha));
    }
    else
    {
        sprintf(buffer,"%d",getDia(fecha));
        *(buffer +2)='/';
        sprintf(buffer+3,"%d",getMes(fecha));
        *(buffer +5)='/';
        sprintf(buffer+6,"%d",getAnio(fecha));
    }
}
char *traerFechaCortaDinamica(FechaPtr fecha)
{
    char *buffer=(char *)obtenerMemoria(sizeof(char)*11);
    traerFechaCorta(fecha,buffer);
    return buffer;
}
bool esBiciesto(FechaPtr fecha)
{
    int anio=getAnio(fecha);
    if(anio%400==0 || (anio%4==0 && anio%100!=0))
        return true;
    else
        return false;
}
FechaPtr sumarAFecha(FechaPtr fecha,int dias)
{
    fecha->diaJuliano+=dias;
    return fecha;
}
int diaSemana(FechaPtr fecha)
{
    return (fecha->diaJuliano+1) % 7;
}
void diaSemanaStr(FechaPtr fecha,char *buffer)
{
    int res=diaSemana(fecha);
    char *dias[]={"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
    strcpy(buffer,dias[res]);
}
void traerFechaLarga(FechaPtr fecha, char* buffer)
{
    /*
    PROCESO
    1. Almacenamos el d�a de la semana.
    2. Ponemos la coma, el espacio y metemos el d�a.
    3. Ponemos " de " y el mes.
    4. Ponemos " de " y el a�o.

    Los nombres de los d�as de la semana y los meses
    pueden variar dependiendo de cual se trate, asimismo
    con la longitud resultante del string, por lo que usar
    strlen() y sprintf se encargar�a de medir cada una de
    estas palabras, resolviendo el problema.
    */


    char *diaSemana=(char*)obtenerMemoria((sizeof(char)*9)+1);
    diaSemanaStr(fecha,diaSemana);
    char *mes[]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio",
                 "Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

    int i=getMes(fecha)-1; //este ser� el mes numerico.
    //Le restamos 1 x q mes[] va de 0 a 11, y getMes() va de 1 a 12

    strcpy(buffer,diaSemana); //copiamos el dia de la semana
    strcat(buffer,", "); //ponemos la coma al final de eso

    sprintf(buffer+strlen(buffer),"%d",getDia(fecha)); //agregamos el dia numerico
    strcat(buffer," de "); //concatenamos " de " al final del buffer

    strcat(buffer,mes[i]); //concatenamos el mes
    strcat(buffer," de ");

    sprintf(buffer+strlen(buffer),"%d",getAnio(fecha)); //agregamos el anio numerico

    free(diaSemana);
    diaSemana=NULL;
}
void traerFechaYHora(FechaPtr fecha,char *buffer) ///NUEVA
{
    traerFechaCorta(fecha,buffer);
    strcat(buffer,", ");
    sprintf(buffer+strlen(buffer),"%d",getHora(fecha));
    strcat(buffer,":");
    sprintf(buffer+strlen(buffer),"%d",getMinuto(fecha));
}// Nota: cuando usamos buffer+strlen(buffer), realmente no hace falta restar nada. As� como est�, est� bien.
char *traerFechaYHoraDinamica(FechaPtr fecha) ///NUEVA
{
    char *buffer=(char*)obtenerMemoria(sizeof(char)*18);
    ///18 porque es el tama�o mas grande posible para este formato de fecha y hora.
    traerFechaYHora(fecha,buffer);
    return buffer;
}

bool esFechaValida(FechaPtr fecha) ///NUEVA
{
    bool diaValido=true;
    bool mesValido=true;
    bool anioValido=true; //entre 2000 y 2030
    bool horaValida=true;
    bool minutoValido=true;

//    E  F    M  A  M  J  J  A  S  O  N  D  <<<MESES
//    31 29/8 31 30 31 30 31 31 30 31 30 31 <<<DIAS

    switch(getMes(fecha))
    {
    case 1: //enero
        diaValido = (getDia(fecha)>=1) && (getDia(fecha)<=31);
        break;
    case 2: //febrero
        if(esBiciesto(fecha))
            diaValido = (getDia(fecha)>=1) && (getDia(fecha)<=29);
        else
            diaValido = (getDia(fecha)>=1) && (getDia(fecha)<=28);
        break;
    case 3: //marzo
        diaValido = (getDia(fecha)>=1) && (getDia(fecha)<=31);
        break;
    case 4: //abril
        diaValido = (getDia(fecha)>=1) && (getDia(fecha)<=30);
        break;
    case 5: //mayo
        diaValido = (getDia(fecha)>=1) && (getDia(fecha)<=31);
        break;
    case 6: //junio
        diaValido = (getDia(fecha)>=1) && (getDia(fecha)<=30);
        break;
    case 7: //julio
        diaValido = (getDia(fecha)>=1) && (getDia(fecha)<=31);
        break;
    case 8: //agosto
        diaValido = (getDia(fecha)>=1) && (getDia(fecha)<=31);
        break;
    case 9: //septiembre
        diaValido = (getDia(fecha)>=1) && (getDia(fecha)<=30);
        break;
    case 10: //octubre
        diaValido = (getDia(fecha)>=1) && (getDia(fecha)<=31);
        break;
    case 11: //noviembre
        diaValido = (getDia(fecha)>=1) && (getDia(fecha)<=30);
        break;
    case 12: //diciembre
        diaValido = (getDia(fecha)>=1) && (getDia(fecha)<=31);
        break;
    default:
        mesValido=false;
        break;
    }

    anioValido = (getAnio(fecha)>=2000) && (getAnio(fecha)<=2030);

    horaValida = (getHora(fecha)>=0) && (getHora(fecha)<=23);

    minutoValido = (getMinuto(fecha)>=0) && (getMinuto(fecha)<=59);

    return diaValido && mesValido && anioValido && horaValida && minutoValido;
}
