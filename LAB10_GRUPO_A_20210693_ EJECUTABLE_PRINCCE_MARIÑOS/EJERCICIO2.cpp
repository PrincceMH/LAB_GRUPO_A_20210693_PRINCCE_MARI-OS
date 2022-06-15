#include <iostream>

using namespace std;



class nodo{

public:

int dato; nodo* sgte; nodo(){
}

nodo* agregar1(nodo*,int);

void mostrar(nodo*);

};



nodo* nodo::agregar1(nodo* inicio, int numero){



nodo* nuevo=new nodo; nuevo->dato=numero; nuevo->sgte=inicio; return nuevo;
}



void nodo::mostrar(nodo*inicio){

cout<<" "<<endl;

for(nodo *p=inicio;p!=NULL;p=p->sgte){

cout<<p->dato<<"->";

}

} 
int main(){

int tam;

int num;

nodo* inicio=NULL;

cout<<"Ingrese el tamano de la lista :"<<endl;

cin>>tam;

for(int i=0;i<tam;i++){

cout<<"Numero: "<<endl;

cin>>num;

inicio=inicio->agregar1(inicio,num);

}



inicio->mostrar(inicio);

return 0;


