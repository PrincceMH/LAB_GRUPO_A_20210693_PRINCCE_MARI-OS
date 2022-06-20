Main.cpp
#include "Pila.h"
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]) {
vector<int>pi;
Pila pila;
pila.push();
pila.printPila();
int n;
cout<<"\nQue numero desea buscar?: ";cin>>n;
cout<<endl;
pila.buscarNum(n);
return 0;
}



Pila.h
#ifndef PILA_H
#define PILA_H
#include <iostream>
#include <vector>
using namespace std;
class Pila{
 private:
 vector<int>pi;
 int indexTop;
 int maxSize;
 public:
 Pila();
 bool empty();
 int top();
 void push();
 void pop();
 void printPila();
 void buscarNum(int);
};
#endif // PILA_H




Pila.cpp
#include "Pila.h"
#include <iostream>
#include <vector>
using namespace std;
Pila::Pila(){
indexTop=-1;
}
bool Pila::empty()
{
if(indexTop==-1){
return true;
}
return false;
}
void Pila::push(){
int elemento, n;
cout<<"Cuantos elemento desea ingresar? : ";cin>>n;
for(int i=0;i<n;i++)
 {
 cout<<"Ingrese el Numero "<<i+1<<" : ";cin>>elemento;
 pi.push_back(elemento);
 }
}
void Pila::pop()
{
pi.pop_back();
cout<<endl<<"\nEl elemento a sido Eliminado con exito ."<<endl;
}
void Pila::printPila(){
cout<<"\t\t---> Elementos en la Pila <---"<<endl;
for(int i=pi.size()-1; i>=0;i--){
cout<<pi[i]<<" - ";
}
}
void Pila::buscarNum(int n){
int num,aux=0;
if(pi.size()==0){
cout<<"La pila esta vacia"<<endl;
}
else{
for(int i=0; i<pi.size();i++){
if(pi[i]==n){
cout<<endl<<"\t\t--- El numero "<<n<<" se encontro en la pila ---"<<endl;
aux++;
}
}
if(aux<1){
cout<<endl<<" \t\t--- Error no se encontro el numero "<<n<<" en la pila ---"<<endl;
}
}
}