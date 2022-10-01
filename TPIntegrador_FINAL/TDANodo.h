#ifndef TDANODO_H_INCLUDED
#define TDANODO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>


typedef void* PtrDato;

typedef struct Nodo
{
    PtrDato dato;
    struct Nodo* sgte;
} Nodo;
typedef Nodo* PtrNodo;

const void* SinNodoSgte;

// Operaci�n de construccion (constructor)
// Precondici�n: El nodo no debe haberse creado
// Postcondici�n: Se crea el nodo con null en PtrDato y SinNodoSgte en sgte
// Par�metros:
//  Ninguno
// Devuelve puntero al nodo creado
PtrNodo crearNodo(PtrDato dato);

// Operaci�n de destruccion (destructor)
// Precondici�n: El nodo debe haberse creado
// Postcondici�n: Se Libera la memoria del nodo eliminado
// Par�metros:
//  puntero al nodo a eliminar
// Devuelve NULL
PtrNodo destruirNodo(PtrNodo nodo);

// Operaci�n de establecimiento de datos
// Precondici�n: nodo creado con crearNodo()
// Postcondici�n: almacena el dato proporcionado en el nodo apuntado por ptrNodo.
// Par�metros:
//  ptrNodo: puntero al nodo
//  PtrDato: Puntero al dato a almacenar
// No devuelve valor
void setDato(PtrNodo nodo,PtrDato dato);

// Operaci�n de obtenci�n de datos
// Precondici�n: nodo creado con crearNodo()
// Postcondici�n: obtiene el dato almacenado en el nodo apuntado por ptrNodo.
// Par�metros:
//  ptrNodo: puntero al nodo
// Devuelve puntero al dato almacenado
PtrDato getDato(PtrNodo nodo);

// Operaci�n de establecimiento del siguiente nodo
// Precondici�n: esteNodo creado con crearNodo()
// Postcondici�n: se establece el nodo siguiente al actual
// Par�metros:
//  esteNodo: puntero al nodo
// No devuelve valor
void setSiguiente(PtrNodo esteNodo,PtrNodo siguienteNodo);

// Operaci�n de obtenci�n del siguiente nodo
// Precondici�n: esteNodo creado con crearNodo()
// Postcondici�n: se obtiene el nodo siguiente al actual
// Par�metros:
//  nodo: puntero al nodo
// No devuelve valor
PtrNodo getSiguiente(PtrNodo nodo);

#endif // TDANODO_H_INCLUDED
