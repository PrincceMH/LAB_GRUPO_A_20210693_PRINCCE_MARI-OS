#include <iostream>
using namespace std;

template <class T,class P>
T operaciones(T a,P b) {
    P multi,suma,resta,div;
    multi=(a*b);
    suma=(a+b);
    resta=(a-b);
    div=(a/b);
    cout<<"LA SUMA ES : "<<suma<<endl;
    cout<<"LA RESTA ES : "<<resta<<endl;
    cout<<"LA MULTIPLICACION ES : "<<multi<<endl;
    cout<<"LA DIVISION ES : "<<div<<endl;
}


int main()
{
    int numero;
    float numero2;
    cout<<"Porfavor Ingrese un numero entero? : ";cin>>numero;
    cout<<"Ahora Ingrese un numero flotante? : ";cin>>numero2;
    operaciones(numero,numero2);
    return 0;
}
