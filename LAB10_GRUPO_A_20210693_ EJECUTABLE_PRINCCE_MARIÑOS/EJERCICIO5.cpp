main.cpp

#include<iostream>

#include "Lista.h"
using namespace std;


int main (int argc, char *argv[]){



Lista l1; 
l1.newNodo(5); 
l1.newNodo(15); 
l1.newNodo(17); 
l1.newNodo(208); 
l1.newNodo(95); 
l1.newNodo(24);

l1.newNodo(68);

l1.newNodo(70);

l1.newNodo(114);

l1.newNodo(2);

l1.printTList();

l1.printLista();

cout<<endl<<"Primer elemento eliminado : ";

l1.eliminarPrimero();

l1.printTList();

l1.printLista();



return 0;

}



Nodo.h

#ifndef NODO_H

#define NODO_H

#include <iostream>

using namespace std;

class Nodo{

public:

int datos;

Nodo* siguienteNodo;

Nodo();

~Nodo();

Nodo(int datoIngresado);

};

#endif 
Nodo.cpp

#include "Nodo.h"



Nodo::Nodo(){

datos=0;

siguienteNodo=NULL;

}



Nodo::~Nodo(){



}



Nodo::Nodo(int datoIngresado){

this->datos=datoIngresado;

this->siguienteNodo=NULL;

}



Lista.h

#ifndef LISTAENLAZADA_H

#define LISTAENLAZADA_H

#include "Nodo.h"

class Lista{

Nodo* cabeza;

int longitudList;

public:

Lista();

~Lista();

void newNodo(int datos);

void tamList();

void printTList();

bool insertarEnMedio(int datos,int posicion); 
void eliminarUltimo();

void eliminarPrimero();

void printLista();

};



#endif



Lista.cpp



#include "Lista.h"



Lista::Lista(){

cabeza=NULL;

}



Lista::~Lista(){



}

void Lista::eliminarUltimo(){

this->tamList();

Nodo *aux1=cabeza;

Nodo *aux2=NULL;

if (cabeza==NULL){

cout<<endl<<"Nada que eliminar la lista está vacía."<<endl;

return;

}

else if (cabeza->siguienteNodo==NULL){

cabeza=NULL;

delete cabeza;

return;

} 
int tam;

tam=longitudList;

while(tam-->1){

aux2=aux1;

aux1=aux1->siguienteNodo;

}

aux2->siguienteNodo=aux1->siguienteNodo;

delete aux1;

}

void Lista::eliminarPrimero(){

this->tamList();

Nodo *aux=cabeza;

if (cabeza==NULL){

cout<<endl<<"Nada que eliminar la lista está vacía."<<endl;

return;

}

else if (cabeza->siguienteNodo==NULL){

cabeza=NULL;

delete cabeza;

return;

}

cabeza=cabeza->siguienteNodo;

delete aux;

}

void Lista::tamList(){

longitudList=0;

if (cabeza==NULL){

return;

}

Nodo* auxExtra=cabeza;

while (auxExtra!=NULL){ 
auxExtra=auxExtra->siguienteNodo;

longitudList++;

}

}

void Lista::printTList(){

this->tamList();

cout<<endl<<"\t\t\t-- HAY "<<longitudList<<" ELEMENTOS EN LA LISTA --\n"<<endl;

}

void Lista::newNodo(int datos){

Nodo* nuevoNodo= new Nodo(datos);

if (cabeza==NULL){

cabeza=nuevoNodo;

return;

}

Nodo* aux=cabeza;

while (aux->siguienteNodo!=NULL){

aux=aux->siguienteNodo;

}

aux->siguienteNodo=nuevoNodo; /*Nodo ingresado va al final*/

}

bool Lista::insertarEnMedio(int datos,int posicion){

Nodo* nuevoNodo= new Nodo(datos);

this->tamList();

if (longitudList>1 && posicion<longitudList && posicion>0){

Nodo* aux1=cabeza;

Nodo* aux2=NULL;

while (posicion-->=1){

aux2=aux1; /*posicion del elemento actual*/

aux1=aux1->siguienteNodo;

}

aux2->siguienteNodo=nuevoNodo; 
nuevoNodo->siguienteNodo=aux1;

return true;

}

else{

cout<<"Posicion no valida."<<endl;

return false;

}

}



void Lista::printLista(){

Nodo* aux=cabeza;

if (cabeza==NULL){

cout<<"La lista está vacía."<<endl;

return;

}

cout<<"\t\tLista --> ";



while (aux!=NULL){

if ((aux->siguienteNodo)!=NULL){

cout<<aux->datos<<", ";

}

else{

cout<<aux->datos;

}

aux=aux->siguienteNodo;

}

cout<<endl;

} 
