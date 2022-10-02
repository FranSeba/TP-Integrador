#ifndef FILES_H_INCLUDED
#define FILES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "TDACentroLogistico.h"

/**
****************************************************************************************************************
                                                INTERFAZ DE ARCHIVOS
****************************************************************************************************************/

///                                                 OPERACIONES


/// //////////////////////////////////////////////////////////////////////////////////////////////////////// ///
///                                                  ESCRITURA
/// //////////////////////////////////////////////////////////////////////////////////////////////////////// ///

/// Para datos individuales
//  Se pueden pensar como un portapapeles.

//OPERACI�N: Guarda un AAA en un archivo dedicado
//PRECONDICI�N: La variable AAAPtr que se pase deber� haber sido creada previamente con crearA.
//POSTCONDICI�N: se copian los contenidos de la estructura AAAPtr en una estructura est�tica interna "fAAA",
//               la cual se guarda posteriormente en un archivo de texto (.txt).
//PAR�METROS
//  Puntero a la estructura AAA din�mica
//DEVUELVE: true si se pudo guardar, false de lo contrario (if archivo == NULL)
bool guardarCuil(CuilPtr cuil);
//OPERACI�N: Guarda un BBB en un archivo dedicado
//PRECONDICI�N: La variable BBBPtr que se pase deber� haber sido creada previamente con crearB.
//POSTCONDICI�N: se copian los contenidos de la estructura BBBPtr en una estructura est�tica interna "fBBB",
//               la cual se guarda posteriormente en un archivo de texto (.txt).
//PAR�METROS
//  Puntero a la estructura BBB din�mica
//DEVUELVE: true si se pudo guardar, false de lo contrario (if archivo == NULL)
bool guardarDomicilio(DomicilioPtr domicilio);
//OPERACI�N: Guarda una CCC en un archivo dedicado
//PRECONDICI�N: La variable CCCPtr que se pase deber� haber sido creada previamente con crearCCC.
//POSTCONDICI�N: se copian los contenidos de la estructura CCCPtr en una estructura est�tica interna "fCCC",
//               la cual se guarda posteriormente en un archivo de texto (.txt).
//PAR�METROS
//  Puntero a la estructura CCC din�mica
//DEVUELVE: true si se pudo guardar, false de lo contrario (if archivo == NULL)
bool guardarFecha(FechaPtr fecha);
//OPERACI�N: Guarda una DDD en un archivo dedicado
//PRECONDICI�N: La variable DDDPtr que se pase deber� haber sido creada previamente con crearDDD.
//POSTCONDICI�N: se copian los contenidos de la estructura DDDPtr en una estructura est�tica interna "fDDD",
//               la cual se guarda posteriormente en un archivo de texto (.txt).
//PAR�METROS
//  Puntero a la estructura DDD din�mica
//DEVUELVE: true si se pudo guardar, false de lo contrario (if archivo == NULL)
bool guardarPersona(PersonaPtr persona);
//OPERACI�N: Guarda una EEE en un archivo dedicado
//PRECONDICI�N: La variable EEEPtr que se pase deber� haber sido creada previamente con crearEEE.
//POSTCONDICI�N: se copian los contenidos de la estructura EEEPtr en una estructura est�tica interna "fEEE",
//               la cual se guarda posteriormente en un archivo de texto (.txt).
//PAR�METROS
//  Puntero a la estructura EEE din�mica
//DEVUELVE: true si se pudo guardar, false de lo contrario (if archivo == NULL)
bool guardarPaquete(PaquetePtr paquete);
//OPERACI�N: Guarda una FFF en un archivo dedicado
//PRECONDICI�N: La variable FFFPtr que se pase deber� haber sido creada previamente con crearFFF.
//POSTCONDICI�N: se copian los contenidos de la estructura FFFPtr en una estructura est�tica interna "fFFF",
//               la cual se guarda posteriormente en un archivo de texto (.txt).
//PAR�METROS
//  Puntero a la estructura FFF din�mica
//DEVUELVE: true si se pudo guardar, false de lo contrario (if archivo == NULL)
bool guardarVehiculo(VehiculoPtr vehiculo);
//OPERACI�N: Guarda una GGG en un archivo dedicado
//PRECONDICI�N: La variable GGGPtr que se pase deber� haber sido creada previamente con crearGGG.
//POSTCONDICI�N: se copian los contenidos de la estructura GGGPtr en una estructura est�tica interna "fGGG",
//               la cual se guarda posteriormente en un archivo de texto (.txt).
//PAR�METROS
//  Puntero a la estructura GGG din�mica
//DEVUELVE: true si se pudo guardar, false de lo contrario (if archivo == NULL)
bool guardarReparto(RepartoPtr reparto);


///---------------------------------------------------------------------------------------------------------------

/// Para conjuntos de datos - Para guardar bases de datos de structs por defecto.
//  Dedicadas a las funciones de creaci�n de datos por defecto de test.h.

//OPERACI�N: Guarda un conjunto de AAAs
//PRECONDICI�N: La estructura debe haber sido creada con su respectiva constructora.
//POSTCONDICI�N: Copia dentro del archivo los datos pasados por medio de un doble puntero y la cantidad enviada
//PAR�METROS
//  cuils: PUNTERO A PUNTERO A la estructura AAA (Doble puntero). Se puede pensar como un vector de AAAs
//  cantidad: entero representando la cantidad de AAAs a guardar.
//DEVUELVE: verdadero si se guard� correctamente, falso si ocurri� un error
bool guardarCuils(CuilPtr *cuils,int cantidad);
//OPERACI�N: Guarda un conjunto de BBBs
//PRECONDICI�N: La estructura debe haber sido creada con su respectiva constructora.
//POSTCONDICI�N: Copia dentro del archivo los datos pasados por medio de un doble puntero y la cantidad enviada
//PAR�METROS
//  cuils: PUNTERO A PUNTERO A la estructura BBB (Doble puntero). Se puede pensar como un vector de BBBs
//  cantidad: entero representando la cantidad de BBBs a guardar.
//DEVUELVE: verdadero si se guard� correctamente, falso si ocurri� un error
bool guardarDomicilios(DomicilioPtr *domicilios,int cantidad);
//OPERACI�N: Guarda un conjunto de CCCs
//PRECONDICI�N: La estructura debe haber sido creada con su respectiva constructora.
//POSTCONDICI�N: Copia dentro del archivo los datos pasados por medio de un doble puntero y la cantidad enviada
//PAR�METROS
//  cuils: PUNTERO A PUNTERO A la estructura CCC (Doble puntero). Se puede pensar como un vector de CCCs
//  cantidad: entero representando la cantidad de CCCs a guardar.
//DEVUELVE: verdadero si se guard� correctamente, falso si ocurri� un error
bool guardarFechas(FechaPtr *fechas,int cantidad);
//OPERACI�N: Guarda un conjunto de DDDs
//PRECONDICI�N: La estructura debe haber sido creada con su respectiva constructora.
//POSTCONDICI�N: Copia dentro del archivo los datos pasados por medio de un doble puntero y la cantidad enviada
//PAR�METROS
//  cuils: PUNTERO A PUNTERO A la estructura DDD (Doble puntero). Se puede pensar como un vector de DDDs
//  cantidad: entero representando la cantidad de DDDs a guardar.
//DEVUELVE: verdadero si se guard� correctamente, falso si ocurri� un error
bool guardarPersonas(PersonaPtr *personas,int cantidad);
//OPERACI�N: Guarda un conjunto de EEEs
//PRECONDICI�N: La estructura debe haber sido creada con su respectiva constructora.
//POSTCONDICI�N: Copia dentro del archivo los datos pasados por medio de un doble puntero y la cantidad enviada
//PAR�METROS
//  cuils: PUNTERO A PUNTERO A la estructura EEE (Doble puntero). Se puede pensar como un vector de EEEs
//  cantidad: entero representando la cantidad de EEEs a guardar.
//DEVUELVE: verdadero si se guard� correctamente, falso si ocurri� un error
bool guardarPaquetes(PaquetePtr *paquetes,int cantidad);
//OPERACI�N: Guarda un conjunto de FFFs
//PRECONDICI�N: La estructura debe haber sido creada con su respectiva constructora.
//POSTCONDICI�N: Copia dentro del archivo los datos pasados por medio de un doble puntero y la cantidad enviada
//PAR�METROS
//  cuils: PUNTERO A PUNTERO A la estructura FFF (Doble puntero). Se puede pensar como un vector de FFFs
//  cantidad: entero representando la cantidad de FFFs a guardar.
//DEVUELVE: verdadero si se guard� correctamente, falso si ocurri� un error
bool guardarVehiculos(VehiculoPtr *vehiculos,int cantidad);
//OPERACI�N: Guarda un conjunto de GGGs
//PRECONDICI�N: La estructura debe haber sido creada con su respectiva constructora.
//POSTCONDICI�N: Copia dentro del archivo los datos pasados por medio de un doble puntero y la cantidad enviada
//PAR�METROS
//  cuils: PUNTERO A PUNTERO A la estructura GGG (Doble puntero). Se puede pensar como un vector de GGGs
//  cantidad: entero representando la cantidad de GGGs a guardar.
//DEVUELVE: verdadero si se guard� correctamente, falso si ocurri� un error
bool guardarRepartos(RepartoPtr *repartos,int cantidad);


///---------------------------------------------------------------------------------------------------------------

/// Para listas de datos - Centro Log�stico


//OPERACI�N: guarda una lista de DDDs en un archivo de texto
//PRECONDICI�N: centroLogistico debe haber sido creado con la funci�n crearCentroLogistico y cargado con una
//              lista de DDDs
//POSTCONDICI�N: Extrae la lista de DDDs y las registra una por una dentro de un archivo de texto
//PAR�METROS
//  centroLogistico: puntero a la estructura CentroLogistico del que extraer la lista de DDDs para guardar
//DEVUELVE: verdadero si se guard� correctamente, falso si ocurri� un error
bool guardarListaPersonas(CentroLogisticoPtr centroLogistico);
//OPERACI�N: guarda una lista de EEEs en un archivo de texto
//PRECONDICI�N: centroLogistico debe haber sido creado con la funci�n crearCentroLogistico y cargado con una
//              lista de EEEs
//POSTCONDICI�N: Extrae la lista de EEEs y los registra uno por uno dentro de un archivo de texto
//PAR�METROS
//  centroLogistico: puntero a la estructura CentroLogistico del que extraer la lista de EEEs para guardar
//DEVUELVE: verdadero si se guard� correctamente, falso si ocurri� un error
bool guardarListaPaquetes(CentroLogisticoPtr centroLogistico);
//OPERACI�N: guarda una lista de FFFs en un archivo de texto
//PRECONDICI�N: centroLogistico debe haber sido creado con la funci�n crearCentroLogistico y cargado con una
//              lista de FFFs
//POSTCONDICI�N: Extrae la lista de FFFs y los registra uno por uno dentro de un archivo de texto
//PAR�METROS
//  centroLogistico: puntero a la estructura CentroLogistico del que extraer la lista de FFFs para guardar
//DEVUELVE: verdadero si se guard� correctamente, falso si ocurri� un error
bool guardarListaVehiculos(CentroLogisticoPtr centroLogistico);
//OPERACI�N: guarda una lista de GGGs en un archivo de texto
//PRECONDICI�N: centroLogistico debe haber sido creado con la funci�n crearCentroLogistico y cargado con una
//              lista de GGGs
//POSTCONDICI�N: Extrae la lista de GGGs y los registra uno por uno dentro de un archivo de texto
//PAR�METROS
//  centroLogistico: puntero a la estructura CentroLogistico del que extraer la lista de GGGs para guardar
//DEVUELVE: verdadero si se guard� correctamente, falso si ocurri� un error
bool guardarListaRepartos(CentroLogisticoPtr centroLogistico);


///---------------------------------------------------------------------------------------------------------------

/// Guardado general


//OPERACI�N: guarda un centro log�stico en un conjunto de archivos de texto.
//PRECONDICI�N: centroLogistico debe haber sido creado con la funci�n crearCentroLogistico previamente
//POSTCONDICI�N: Utiliza a las funciones "guardarLista" para registrar el conjunto de datos procedente del
//               centro logistico en una serie de archivos de texto.
//PAR�METROS
//      centroLogistico: Puntero a la estructura CentroLogistico a guardar
//DEVUELVE: verdadero si TODO se guard� correctamente,
//  falso si ocurri� un error EN EL GUARDADO DE ALGUNO DE LOS DATOS.
bool guardarTodo(CentroLogisticoPtr centroLogistico); //implementacion: llamar� a las otras funciones de guardado





/// //////////////////////////////////////////////////////////////////////////////////////////////////////// ///
///                                                   LECTURA
//                                 Se reutilizan las estructuras creadas en main.c
/// //////////////////////////////////////////////////////////////////////////////////////////////////////// ///


/// Para datos individuales
//  Se pueden pensar como un portapapeles.


//OPERACI�N: recupera los datos de una estructura AAA desde un archivo de texto
//PRECONDICI�N: La variable AAA recibida debe haber sido definida previamente,
//              y su contenido vaciado con su funci�n destructora.
/// - ADEM�S, DEBE HABERSE GUARDADO UN CONJUNTO DE AAA PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "AAA.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: se llena la estructura AAA con los contenidos del archivo de texto
//PAR�METROS
//  AAA: puntero a la estructura AAA en la que se quiere cargar datos
//DEVUELVE: true si se pudo abrir, false de lo contrario (if archivo == NULL)
bool abrirCuil(CuilPtr cuil);
//OPERACI�N: recupera los datos de una estructura BBB desde un archivo de texto
//PRECONDICI�N: La variable BBB recibida debe haber sido definida previamente,
//              y su contenido vaciado con su funci�n destructora.
/// - ADEM�S, DEBE HABERSE GUARDADO UN CONJUNTO DE BBB PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "BBB.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: se llena la estructura BBB con los contenidos del archivo de texto
//PAR�METROS
//  BBB: puntero a la estructura BBB en la que se quiere cargar datos
//DEVUELVE: true si se pudo abrir, false de lo contrario (if archivo == NULL)
bool abrirDomicilio(DomicilioPtr domicilio);
//OPERACI�N: recupera los datos de una estructura CCC desde un archivo de texto
//PRECONDICI�N: La variable CCC recibida debe haber sido definida previamente,
//              y su contenido vaciado con su funci�n destructora.
/// - ADEM�S, DEBE HABERSE GUARDADO UN CONJUNTO DE CCC PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "CCC.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: se llena la estructura CCC con los contenidos del archivo de texto
//PAR�METROS
//  CCC: puntero a la estructura CCC en la que se quiere cargar datos
//DEVUELVE: true si se pudo abrir, false de lo contrario (if archivo == NULL)
bool abrirFecha(FechaPtr fecha);
//OPERACI�N: recupera los datos de una estructura DDD desde un archivo de texto
//PRECONDICI�N: La variable DDD recibida debe haber sido definida previamente,
//              y su contenido vaciado con su funci�n destructora.
/// - ADEM�S, DEBE HABERSE GUARDADO UN CONJUNTO DE DDD PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "DDD.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: se llena la estructura DDD con los contenidos del archivo de texto
//PAR�METROS
//  DDD: puntero a la estructura DDD en la que se quiere cargar datos
//DEVUELVE: true si se pudo abrir, false de lo contrario (if archivo == NULL)
bool abrirPersona(PersonaPtr persona);
//OPERACI�N: recupera los datos de una estructura EEE desde un archivo de texto
//PRECONDICI�N: La variable EEE recibida debe haber sido definida previamente,
//              y su contenido vaciado con su funci�n destructora.
/// - ADEM�S, DEBE HABERSE GUARDADO UN CONJUNTO DE EEE PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "EEE.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: se llena la estructura EEE con los contenidos del archivo de texto
//PAR�METROS
//  EEE: puntero a la estructura EEE en la que se quiere cargar datos
//DEVUELVE: true si se pudo abrir, false de lo contrario (if archivo == NULL)
bool abrirPaquete(PaquetePtr paquete);
//OPERACI�N: recupera los datos de una estructura FFF desde un archivo de texto
//PRECONDICI�N: La variable FFF recibida debe haber sido definida previamente,
//              y su contenido vaciado con su funci�n destructora.
/// - ADEM�S, DEBE HABERSE GUARDADO UN CONJUNTO DE FFF PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "FFF.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: se llena la estructura FFF con los contenidos del archivo de texto
//PAR�METROS
//  FFF: puntero a la estructura FFF en la que se quiere cargar datos
//DEVUELVE: true si se pudo abrir, false de lo contrario (if archivo == NULL)
bool abrirVehiculo(VehiculoPtr vehiculo);
//OPERACI�N: recupera los datos de una estructura GGG desde un archivo de texto
//PRECONDICI�N: La variable GGG recibida debe haber sido definida previamente,
//              y su contenido vaciado con su funci�n destructora.
/// - ADEM�S, DEBE HABERSE GUARDADO UN CONJUNTO DE GGG PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "GGG.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: se llena la estructura GGG con los contenidos del archivo de texto
//PAR�METROS
//  GGG: puntero a la estructura GGG en la que se quiere cargar datos
//DEVUELVE: true si se pudo abrir, false de lo contrario (if archivo == NULL)
bool abrirReparto(RepartoPtr reparto);


///---------------------------------------------------------------------------------------------------------------

/// Para conjuntos de datos - Para abrir bases de datos de structs por defecto.
//  Dedicadas a las funciones de creaci�n de datos por defecto de test.h.

//OPERACI�N: Recupera los datos de un conjunto de AAAs de un archivo de texto
//PRECONDICI�N:
//  - La estructura debe haber sido definida previamente,
//      y su contenido vaciado con su respectiva funci�n destructora.
/// - ADEM�S, DEBEN HABERSE GUARDADO UN CONJUNTO DE AAAS PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "AAAs por Defecto.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: Copia dentro del conjunto de AAAs los datos almacenados en un archivo de texto.
//PAR�METROS
//  cuils: PUNTERO A PUNTERO A la estructura AAA (Doble puntero). Se puede pensar como un vector de AAAs
//DEVUELVE: verdadero si se abri� correctamente, falso si ocurri� un error
bool abrirCuils(CuilPtr *cuils);
//OPERACI�N: Recupera los datos de un conjunto de BBBs de un archivo de texto
//PRECONDICI�N:
//  - La estructura debe haber sido definida previamente,
//      y su contenido vaciado con su respectiva funci�n destructora.
/// - ADEM�S, DEBEN HABERSE GUARDADO UN CONJUNTO DE BBBS PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "BBBs por Defecto.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: Copia dentro del conjunto de BBBs los datos almacenados en un archivo de texto.
//PAR�METROS
//  BBBs: PUNTERO A PUNTERO A la estructura BBB (Doble puntero). Se puede pensar como un vector de BBBs
//DEVUELVE: verdadero si se abri� correctamente, falso si ocurri� un error
bool abrirDomicilios(DomicilioPtr *domicilios);
//OPERACI�N: Recupera los datos de un conjunto de CCCs de un archivo de texto
//PRECONDICI�N:
//  - La estructura debe haber sido definida previamente,
//      y su contenido vaciado con su respectiva funci�n destructora.
/// - ADEM�S, DEBEN HABERSE GUARDADO UN CONJUNTO DE CCCS PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "CCCs por Defecto.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: Copia dentro del conjunto de CCCs los datos almacenados en un archivo de texto.
//PAR�METROS
//  CCCs: PUNTERO A PUNTERO A la estructura CCC (Doble puntero). Se puede pensar como un vector de CCCs
//DEVUELVE: verdadero si se abri� correctamente, falso si ocurri� un error
bool abrirFechas(FechaPtr *fechas);
//OPERACI�N: Recupera los datos de un conjunto de DDDs de un archivo de texto
//PRECONDICI�N:
//  - La estructura debe haber sido definida previamente,
//      y su contenido vaciado con su respectiva funci�n destructora.
/// - ADEM�S, DEBEN HABERSE GUARDADO UN CONJUNTO DE DDDS PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "DDDs por Defecto.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: Copia dentro del conjunto de DDDs los datos almacenados en un archivo de texto.
//PAR�METROS
//  DDDs: PUNTERO A PUNTERO A la estructura DDD (Doble puntero). Se puede pensar como un vector de DDDs
//DEVUELVE: verdadero si se abri� correctamente, falso si ocurri� un error
bool abrirPersonas(PersonaPtr *personas);
//OPERACI�N: Recupera los datos de un conjunto de EEEs de un archivo de texto
//PRECONDICI�N:
//  - La estructura debe haber sido definida previamente,
//      y su contenido vaciado con su respectiva funci�n destructora.
/// - ADEM�S, DEBEN HABERSE GUARDADO UN CONJUNTO DE AAAS PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "EEEs por Defecto.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: Copia dentro del conjunto de EEEs los datos almacenados en un archivo de texto.
//PAR�METROS
//  EEEs: PUNTERO A PUNTERO A la estructura EEE (Doble puntero). Se puede pensar como un vector de EEEs
//DEVUELVE: verdadero si se abri� correctamente, falso si ocurri� un error
bool abrirPaquetes(PaquetePtr *paquetes);
//OPERACI�N: Recupera los datos de un conjunto de FFFs de un archivo de texto
//PRECONDICI�N:
//  - La estructura debe haber sido definida previamente,
//      y su contenido vaciado con su respectiva funci�n destructora.
/// - ADEM�S, DEBEN HABERSE GUARDADO UN CONJUNTO DE FFFS PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "FFFs por Defecto.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: Copia dentro del conjunto de FFFs los datos almacenados en un archivo de texto.
//PAR�METROS
//  FFFs: PUNTERO A PUNTERO A la estructura FFF (Doble puntero). Se puede pensar como un vector de FFFs
//DEVUELVE: verdadero si se abri� correctamente, falso si ocurri� un error
bool abrirVehiculos(VehiculoPtr *vehiculos);
//OPERACI�N: Recupera los datos de un conjunto de GGGs de un archivo de texto
//PRECONDICI�N:
//  - La estructura debe haber sido definida previamente,
//      y su contenido vaciado con su respectiva funci�n destructora.
/// - ADEM�S, DEBEN HABERSE GUARDADO UN CONJUNTO DE GGGS PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "GGG por Defecto.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: Copia dentro del conjunto de GGGs los datos almacenados en un archivo de texto.
//PAR�METROS
//  GGGs: PUNTERO A PUNTERO A la estructura GGG (Doble puntero). Se puede pensar como un vector de GGGs
//DEVUELVE: verdadero si se abri� correctamente, falso si ocurri� un error
bool abrirRepartos(RepartoPtr *repartos);


///---------------------------------------------------------------------------------------------------------------

/// Para listas de datos - Centro Log�stico


//OPERACI�N: Recupera una lista de DDDs de un archivo de texto
//PRECONDICI�N: centroLogistico debe haber sido creado con la funci�n crearCentroLogistico,
//              y su lista de DDDs debe estar vac�a
/// - ADEM�S, DEBE HABERSE GUARDADO UNA LISTA DE DDDS PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "Lista de DDDs.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: Abre el archivo y copia los datos en la lista de DDDs del centro log�stico recibido
//PAR�METROS
//  centroLogistico: puntero a la estructura CentroLogistico del que extraer la lista de DDDs para guardar
//DEVUELVE: verdadero si se abri� correctamente, falso si ocurri� un error
bool abrirListaPersonas(CentroLogisticoPtr centroLogistico);
//OPERACI�N: Recupera una lista de EEE de un archivo de texto
//PRECONDICI�N: centroLogistico debe haber sido creado con la funci�n crearCentroLogistico,
//              y su lista de EEEs debe estar vac�a
/// - ADEM�S, DEBE HABERSE GUARDADO UNA LISTA DE EEES PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "Lista de EEEs.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: Abre el archivo y copia los datos en la lista de EEEs del centro log�stico recibido
//PAR�METROS
//  centroLogistico: puntero a la estructura CentroLogistico del que extraer la lista de EEEs para guardar
//DEVUELVE: verdadero si se abri� correctamente, falso si ocurri� un error
bool abrirListaPaquetes(CentroLogisticoPtr centroLogistico);
//OPERACI�N: Recupera una lista de FFFs de un archivo de texto
//PRECONDICI�N: centroLogistico debe haber sido creado con la funci�n crearCentroLogistico,
//              y su lista de FFFs debe estar vac�a
/// - ADEM�S, DEBE HABERSE GUARDADO UNA LISTA DE FFFS PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "Lista de FFFs.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: Abre el archivo y copia los datos en la lista de FFFs del centro log�stico recibido
//PAR�METROS
//  centroLogistico: puntero a la estructura CentroLogistico del que extraer la lista de FFFs para guardar
//DEVUELVE: verdadero si se abri� correctamente, falso si ocurri� un error
bool abrirListaVehiculos(CentroLogisticoPtr centroLogistico);
//OPERACI�N: Recupera una lista de GGGs de un archivo de texto
//PRECONDICI�N: centroLogistico debe haber sido creado con la funci�n crearCentroLogistico,
//              y su lista de GGGs debe estar vac�a
/// - ADEM�S, DEBE HABERSE GUARDADO UNA LISTA DE DDDS PREVIAMENTE.
///     VERIFICAR QUE EXISTA UN ARCHIVO "Lista de GGGs.txt" Y QUE TENGA CONTENIDO.
//POSTCONDICI�N: Abre el archivo y copia los datos en la lista de GGGs del centro log�stico recibido
//PAR�METROS
//  centroLogistico: puntero a la estructura CentroLogistico del que extraer la lista de GGGs para guardar
//DEVUELVE: verdadero si se abri� correctamente, falso si ocurri� un error
bool abrirListaRepartos(CentroLogisticoPtr centroLogistico);


///---------------------------------------------------------------------------------------------------------------

/// Guardado general


//OPERACI�N: Crea un centro log�stico a partir de los datos de un conjunto de archivos de texto.
//PRECONDICI�N: centroLogistico debe haber sido declarado previamente
//POSTCONDICI�N: Utiliza a las funciones "abrirLista" para registrar en cada lista del centro log�stico
//               el conjunto de datos procedente de una serie de archivos de texto.
/// - ADEM�S, DEBE HABERSE GUARDADO UNA CENTRO LOG�STICO PREVIAMENTE CON GUARDAR TODO,
///     O UTILIZADO TODAS LAS FUNCIONES DE GUARDADO DE LISTAS.
///     VERIFICAR QUE CADA ARCHIVO DEL TIPO "Lista de ... .txt" EXISTA Y TENGA CONTENIDO.
//PAR�METROS
//      Ninguno
//DEVUELVE: puntero al centro logistico creado si TODO se abri� correctamente,
//  NULL si ocurri� un error EN EL GUARDADO DE ALGUNO DE LOS DATOS.
CentroLogisticoPtr abrirTodo();



///*************************************************************************************************************


///                                         Especiales - Ayudantes

//OPERACION: Funci�n para leer l�neas de texto terminadas con un caracter especial
//PRECONDICI�N:
//      - la variable archivo debe haberse definido previamente.
//      - la variable buffer debe haberse definido previamente con un tama�o recomendado de 100 caracteres
//      - debe existir un archivo de texto con una serie de palabras o frases terminadas de una forma espec�fica
//      - se debe conocer la longitud m�xima del archivo en caracteres
//POSTCONDICI�N: se lee el contenido del archivo y se almacena en el buffer
//PAR�METROS
//  archivo: variable puntero a FILE requerida para abrir y leer del archivo
//  buffer: variabe string en la cual almacenar los datos le�dos
//  longitudMax: entero representando la longitud m�xima de caracreres que se espera leer
//  terminador: variable char representando el caracter que termina cada palabra o frase
//      (suele ser un punto, coma o un fin de l�nea, '\n'. Chequear del archivo de texto)
//DEVUELVE: entero representando la cantidad de caracteres le�dos,
//          o EOF si se lleg� al final del archivo antes de llegar a leer la longitudMax.
int LeerString(FILE *archivo,char *buffer, int longitudMax, char terminador);


#endif // FILES_H_INCLUDED
