Main.cpp

#include <iostream>
#include "Cola.h"
using namespace std;

int main()
{
    int n,x;

    Cola *cola1 = new Cola();
    cout<<"Cuantos Elementos desea ingresar ?: ";
    cin>>n;
    for(int i;i<n;i++)
    {
        cout<<"Ingrese Numero "<<i+1<<" : ";cin>>x;
        cola1->insertar(x);
    }
    cola1->imprimir();
    delete cola1;
    return 0;

}

Cola.h

#ifndef COLA_H
#define COLA_H


class Cola
{
    private:
        class Nodo {
        public:
            int info;
            Nodo *sig;
        };
        Nodo *raiz;
        Nodo *fondo;
    public:
        Cola();
        ~Cola();
        void insertar(int x);
        
        void imprimir();
        bool vacia();
};

#endif // COLA_H




Cola.cpp

#include "Cola.h"
#include <iostream>
using namespace std;
Cola::Cola()
{
    raiz = NULL;
    fondo = NULL;
}

Cola::~Cola()
{
   Nodo *cuerpo = raiz;
    Nodo *c;
    while (cuerpo != NULL)
    {
        c = cuerpo;
        cuerpo = cuerpo->sig;
        delete c;
    }
}
void Cola::insertar(int x)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = NULL;
    if (vacia())
    {
        raiz = nuevo;
        fondo = nuevo;
    }
    else {
        fondo->sig = nuevo;
        fondo = nuevo;
    }
}


void Cola::imprimir()
{
    Nodo *cuerpo = raiz;
    cout << "Listado de todos los elementos de la cola.\n";
    while (cuerpo != NULL)
    {
        cout << cuerpo->info << "-";
        cuerpo = cuerpo->sig;
    }
    cout << "\n";
}

bool Cola::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}
