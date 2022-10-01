#ifndef TDACUIL_H_INCLUDED
#define TDACUIL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*******************************************************************************************************

                                        TDA CUIL - INTERFAZ

*******************************************************************************************************/

typedef struct Cuil
{ //hombre=20,mujer=27,empresa=30
    char *cuil; ///NUEVA IMPLEMENTACION: Ahora es un solo string.
} Cuil;

///NOTAS: SE AGREGARON ALGUNAS FUNCIONES, Y OTRAS SE CONSERVARON (ej.: setters y getters)

typedef Cuil* CuilPtr;

///*****************************************************************************************************
///                                 FUNCIONES: CREACION Y DESTRUCCION
//Operaci�n: Creacion del TDACuil
//Precondici�n: Cuil no debe estar creado.
//Postcondici�n: Crea un nuevo cuil.
//Par�metros:
// tipo: entero que representa el genero
// dni: entero que representa el documenteo dni.
// nVerificador: entero que representa el numero verificador.
//Devuelve un puntero a la estructura creada.
CuilPtr crearCuil(char *cuilStr);

//Para no reemplazar la funcion con la vieja implementacion que ten�amos con la nueva, hice esta
//En realidad, est� bien tener esta funcion, pero hay que cambiar la que est� en los menues
CuilPtr crearCuilNumeros(int tipoPersona,int dni,int nVerificador);

//Operaci�n: Destruccion del TDACuil.
//Precondici�n: Cuil debe estar creado.
//Postcondici�n: Se elimina de la memoria el cuil y se libera.
//Par�metros:
// cuil: puntero a la estructura a destruir.
//Devuelve NULL.
CuilPtr destruirCuil(CuilPtr cuil);

///*****************************************************************************************************
///                                            SETTERS

void setCuil(CuilPtr cuil,char *cuilStr); ///NUEVA
//Operaci�n: Asignacion de tipo de genero.
//Precondici�n: Cuil debe estar creado.
//Postcondici�n: Cuil va a tener un nuevo tipo de valor.
//Par�metros:
// cuil: puntero a la estructura a asignar el nuevo dato.
// tipo: entero que representa el nuevo dato.
//Devuelve nada
void setTipo(CuilPtr cuil,int tipo);
//Operaci�n: Asignacion de dni.
//Precondici�n: Cuil debe estar creado.
//Postcondici�n: Cuil va a tener un nuevo tipo de valor.
//Par�metros:
// cuil: puntero a la estructura a asignar el nuevo dato.
// dni: entero que representa el nuevo dato.
//Devuelve nada
void setDni(CuilPtr cuil,int dni);
//Operaci�n: Asignacion de tipo de genero.
//Precondici�n: Cuil debe estar creado.
//Postcondici�n: Cuil va a tener un nuevo tipo de valor.
//Par�metros:
// cuil: puntero a la estructura a asignar el nuevo dato.
// nVerificador: entero que representa el nuevo dato.
//Devuelve nada
void setNVerificador(CuilPtr cuil,int nVerificador);

///*****************************************************************************************************
///                                            GETTERS

char *getCuil(CuilPtr cuil); ///NUEVA

//Operaci�n: Obtencion del tipo.
//Precondici�n: Cuil debe estar creado.
//Postcondici�n: Se obtiene el tipo de cuil.
//Par�metros:
// cuil: puntero a la estructura a sacar el dato.
//Devuelve un entero representando el tipo de cuil.
int getTipo(CuilPtr cuil);
//Operaci�n: Obtencion del tipo.
//Precondici�n: Cuil debe estar creado.
//Postcondici�n: Se obtiene el dni de cuil.
//Par�metros:
// cuil: puntero a la estructura a sacar el dato.
//Devuelve un entero representando el dni de cuil.
int getDni(CuilPtr cuil);
//Operaci�n: Obtencion del tipo.
//Precondici�n: Cuil debe estar creado.
//Postcondici�n: Se obtiene el numero verificador de cuil.
//Par�metros:
// cuil: puntero a la estructura a sacar el dato.
//Devuelve un entero representando el nuemero verificador de cuil.
int getNVerificador(CuilPtr cuil);

///*****************************************************************************************************
///                                       ESPECIALES

//Operaci�n: determina si el cuil recibido es valido
//Precondici�n: cuil debe haber sido creado con crearCuil()
//Postcondici�n: ninguna
//Par�metros: puntero a estructura cuil a validar
//Devuelve true si es valido, false de lo contrario
bool esCuilValido(CuilPtr cuil); ///NUEVA - NO APTA PARA TIPO EMPRESA

//Operaci�n: sugiere un cuil valido a partir del que se recibe
//Precondici�n: cuil debe haber sido creado con crearCuil()
//Postcondici�n: imprime una sugerencia de cuil valido por pantalla
//Par�metros: puntero a estructura cuil de la cual se quiere mostrar sugerencia
//No devuelve nada.
void sugerirCuilValido(CuilPtr cuil);

//Operaci�n: convierte el cuil recibido a un cuil valido (si era invalido)
//Precondici�n: cuil debe haber sido creado con crearCuil()
//Postcondici�n: cuil cambia a un nuevo valor v�lido
//Par�metros: puntero a estructura cuil que se quiere convertir
//No devuelve nada.
///ADVERTENCIA: Cambia el cuil original aunque la conversion falle.
void convertirACuilValido(CuilPtr cuil);

///*****************************************************************************************************

//Operaci�n: men� de ayuda de CUIL
//Precondici�n: ninguna
//Postcondici�n: ninguna
//Par�metros: despliega un men� de ayuda para que el usuario sepa como es un cuil
//No devuelve nada.
void helpCuil();

//Operaci�n: muestra el CUIL recibido
//Precondici�n: cuil debe haber sido creado con crearCuil()
//Postcondici�n: imprime el CUIL recibido por pantalla
//Par�metros: puntero a estructura cuil que se quiere mostrar
//No devuelve nada.
void mostrarCuil(CuilPtr cuil);

#endif // TDACUIL_H_INCLUDED