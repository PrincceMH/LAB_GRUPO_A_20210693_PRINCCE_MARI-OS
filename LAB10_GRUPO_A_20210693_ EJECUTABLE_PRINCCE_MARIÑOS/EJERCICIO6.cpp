Main.cpp

#include<iostream>

#include<cstdlib>

#include<ctime>

#include <random>

#include "Lista.h"
using namespace std;


int main (int argc, char *argv[]){

int limite=10000;/*Para conseguir los valores, usamos un límite ya que serán pseudoaleatorios.*/

int opc,indice; 
bool validar,salir; 
srand(time(0)); 
Lista l1; 
for(int i = 0; i<10; i++) { //generate 10 random numbers

l1.newNodo(rand()%limite);

}

while (true){

l1.printTList();

l1.printLista();

while (true){
cout<<"(Nota:Posiciones del 1 al 10) Que elemento desean eliminar posicion? : ";

cin>>indice;

validar=l1.eliminarElemento(indice);

if (validar==true){

break;

}

}

cout<<endl<<endl<<"Actualizando lista: "<<endl;

l1.printTList();

l1.printLista();

if (l1.longitudList==0){

cout<<"Error No hay elemento que eliminar"<<endl;

break;

}

else{

while (true){

cout<<endl<<"Desea eliminar otro elemento? : "<<endl<<"1. Sí"<<endl<<"2. No"<<endl<<"elija una opcion: ";

cin>>opc;

if (opc==1){

break;

}

else if (opc==2){

salir=true; 
break;

}

else{

cout<<"Opción no válida."<<endl<<endl;

}

}

}

if (salir==true){

break;

}

}

system("pause");

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



Lista.h

#ifndef LISTAENLAZADA_H

#define LISTAENLAZADA_H

#include "Nodo.h"

class Lista{

Nodo* cabeza;

public:

int longitudList;

Lista();

~Lista();

void newNodo(int datos);

void tamList();

void insertarEnMedio(int datos,int posicion);

bool eliminarElemento(int indice);

void printTList();

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

cout<<endl<<"\t\tHAY "<<longitudList<<" elementoS en la lista"<<endl;

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

aux->siguienteNodo=nuevoNodo;

}

void Lista::insertarEnMedio(int datos,int posicion){

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

return;

}

else{

cout<<endl<<"Posición no válida."<<endl;

return;

}

}

bool Lista::eliminarElemento(int indice){

this->tamList();

Nodo *aux1=cabeza; 
Nodo *aux2=NULL;

if (cabeza==NULL){

cout<<endl<<"Nada que eliminar la lista está vacía"<<endl;

return true;

}

else if (indice>longitudList || indice<1){

cout<<endl<<"Ingrese un índice válido."<<endl;

return false;

}

else if (indice==1){

cabeza=cabeza->siguienteNodo;

delete aux1;

this->tamList();

return true;

}

while (indice-- >1){

aux2=aux1;
 


apuntador*/
 
aux1=aux1->siguienteNodo; /*Avanzamos un elemento según la lista en cada 

}

aux2->siguienteNodo=aux1->siguienteNodo;/*Cambiamos el siguiente del nodo al que apunta aux2 por NULL*/

delete aux1; /*Borramos el nodo seleccionado*/

this->tamList();

return true;

}

void Lista::printLista(){

Nodo* aux=cabeza;

if (cabeza==NULL){

cout<<"La lista está vacía."<<endl;

return;

} 
cout<<"Los elementos de la lista enlazada son: ";

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
