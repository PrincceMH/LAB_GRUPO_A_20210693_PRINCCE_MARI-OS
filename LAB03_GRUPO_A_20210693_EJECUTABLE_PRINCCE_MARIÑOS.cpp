/*EJERCICIO 1
Hacer un programa que sin usar la función pow(), pero por medio de una función,
calcule la potencia de un número (ambos números ingresados por teclado).*/
/*
#include <iostream>

using namespace std;
void potencia(int a,int b,int aux,int c)
{
        aux=0;
        c=1;
        while (c<a){
        if (aux<b)
        {
            aux=b*b;
        }
        else{
            aux=aux*b;
        }
        c++;
        }
        cout<<"\n\tRESULTADO: "<<aux<<endl;
}

int main()
{
    int a;
    int b;
    int aux=0;
    int c=1;
    cout<<"Ingrese La Base: ";cin>>a;
    cout<<"Ingrese El Exponente: ";cin>>b;

    potencia(a,b,aux,c);
    return 0;
}
*/

/*EJERCICIO NUMERO 2

Hacer un programa que lea por teclado un año, calcule y muestre si es bisiesto. Para
realizar el cálculo utiliza una función llamada bisiesto. La función bisiesto recibe el
año leído por teclado, comprueba si es o no bisiesto.*/
/*
#include <iostream>
using namespace std;
void bisiesto(int a)
{
    if(a%4 == 0 && a%100 != 0 || a%400 == 0) //Condición de año bisiesto
      cout<<a<<" --> "<<"Es A"<<(char)164<<"o"<<" Bisiesto"<<endl;
    else
      cout<<a<<"--> "<<"No es A"<<(char)164<<"o"<<" Bisiesto"<< endl;
}

int main()
{
   int a;
   cout << "Introduce a"<<(char)164<<"o: "; //char 164 es el ascii de ñ para que lo imprima
   cin >> a;
   bisiesto(a);

   return 0;
}
*/

/*EJERCICIO NUMERO 3
Hacer un programa que lee por teclado la fecha actual y la fecha de nacimiento*/
/*
#include <iostream>
using namespace std;
void calcularEdad( int a , int b , int c, int x, int y, int z)
{
    int respFech , respMes;
    if ( c < z  )
    {
        c = c + 30;
        b = b - 1;
        respFech =  c - z;
    }
    else
        respFech =  c - z;
    if( b < y )
    {
        b = b + 12;
        a = a - 1 ;
        respMes = b - y;
    }
    else
        respMes = b - y;
    cout << "\n Usted. tiene \n";
    cout << " Edad: " <<a- x << endl;
    cout << " Mes: " << respMes << endl;
    cout << " Dia: " << respFech << endl;
}

int main ()
{
    int aAct,mAct,dAct;
    int aNac,mNac,dNac;
    cout<<" Ingrese A"<<(char)164<<"o"<<" Actual: ";cin>>aAct;
    cout<<" Ingrese Mes Actual: ";cin>>mAct;
    cout<<" Ingrese Dia Actual: ";cin>>dAct;

    cout<<"\n Ingrese A"<<(char)164<<"o"<<" Nacimiento: ";cin>>aNac;
    cout<<" Ingrese Mes de Nacimiento: ";cin>>mNac;
    cout<<" Ingrese Dia de Nacimiento: ";cin>>dNac;
    calcularEdad(aAct , mAct, dAct, aNac, mNac, dNac);
    return 0;
}
*/
/*
EJERCICIO NUMERO 4
Hacer un programa que desarrolle una función, que genere en pantalla el listado de
números primos ubicados entre 1 hasta un numero x (x es ingresado por teclado).*/
/*
#include <iostream>
using namespace std;

bool primo(int n)
{
    bool condicion;
    if(n!=1 && n!= 0)
    {
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                if(n==i)
                {
                    condicion=true;
                }
                else{
                    condicion=false;
                    return condicion;
                }
            }
        }

    }else condicion=false;

    return condicion;

}

int main()
{
    int n;
    cout<<" Ingrese Numero?: ";cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(primo(i))cout<<i<<endl;
    }
    primo(n);
    return 0;
}
*/
