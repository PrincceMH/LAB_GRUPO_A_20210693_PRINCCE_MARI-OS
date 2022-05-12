/*Asignar valores a dos variables enteras, intercambie estos valores almacenados
usando solo punteros a enteros.*/

#include <iostream>

using namespace std;

int main()
{
    int*a=NULL;
    int*b=NULL;
    int num=10;
    int num2=20;
    a=&num;
    b=&num2;
    cout << " Numero 1: " <<num <<endl;
    cout << " Numero 2: " <<num2 <<endl;
    *a=20;
    *b=10;
    cout<<" Cambiando valores "<<endl;
    cout<<" Numero 1: "<<num<<endl;
    cout<<" Numero 2: "<<num2<<endl;

    return 0;
}
