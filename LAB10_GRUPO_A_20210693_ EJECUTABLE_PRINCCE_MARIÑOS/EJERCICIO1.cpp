Main.cpp

#include<iostream>

#include "Nodo.h"

#include "Lista.h"
using namespace std;
int main (int argc, char *argv[]) { 
Lista listaEnlazada1;
int num,elemento,a;
cout<<"Numero de elementos: "; cin>>num;
for(int i=0; i<num; i++)

{
    cout<<"Ingrese Dato: "; cin>>elemento; listaEnlazada1.pushBack(elemento);
} listaEnlazada1.printList();
return 0;
}



Nodo.h

#ifndef NODO_H

#define NODO_H 

class Nodo {

    private:

        int dato;

        Nodo *sig;

    public:

        Nodo(int);

        ~Nodo();

        int getDato();

        void setPtrSig(Nodo*);

        Nodo* getPtrSig();

};

#endif





Nodo.cpp

#include <iostream>

#include "Nodo.h"



Nodo::Nodo(int dato) {

this->dato=dato;

this->sig=nullptr;

}

Nodo::~Nodo() {

}

int Nodo::getDato()

{

return dato;

}

void Nodo::setPtrSig(Nodo* sig)

{ 
this->sig=sig;

}

Nodo* Nodo::getPtrSig()

{

return sig;

}





Lista.h



#ifndef LISTA_H

#define LISTA_H

#include "Nodo.h"

using namespace std;





class Lista {

private:

Nodo* head;

int longitud;

public:

Lista();

~Lista();

int size();

bool empty();

void pushBack(int);

void printList();

void agregarInicio(int);

};

#endif

// LISTA_H 

Lista.cpp

#include "Lista.h"

#include<iostream>

using namespace std;

Lista::Lista() {

head=nullptr;

longitud=0;

}

Lista::~Lista() {

cout<<"Lista Destruida."<<endl;

}

int Lista::size()

{

return longitud;

}

bool Lista::empty()

{

    return(longitud==0);

}

void Lista::pushBack(int num)

{

Nodo* nuevoNodo = new Nodo(num);

if(empty())

{

head=nuevoNodo;

}

else

{

Nodo* aux=head;

while(aux->getPtrSig() != nullptr) 
{

aux= aux->getPtrSig();

}

aux->setPtrSig(nuevoNodo);

}

longitud++;

}

void Lista::printList()

{

Nodo* aux=head;

for(int i=0; i<longitud; i++)

{

cout<<aux->getDato()<<" -> ";

aux = aux->getPtrSig();

}

cout<<endl;

}
