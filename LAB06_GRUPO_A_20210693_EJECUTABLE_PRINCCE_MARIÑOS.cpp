EJERCICIO NUMERO 1
Implemente un programa con clases que calcule el área de un rectángulo y perímetro.

#include <iostream>
#include <carro.h>
#include <Notas.h>
#include <Edad.h>
#include <Lista.h>
#include <stdfix.h>
#include <array>
using namespace std;
int main()
{
    cout<<" --- Calcular el Area y Perimetro de Un Rectangulo ---"<<endl;
    float base,altura;
    cout<<"\n Ingrese la base: ";
    cin>>base;
    cout<<"Ingrese la altura: ";
    cin>>altura;
    Rectangulo r1 = Rectangulo(base,altura);
    r1.calcularArea();
    Rectangulo r2 = Rectangulo(base,altura);
    r2.calcularPerimetro();
    return 0;
}


#ifndef CARRO_H
#define CARRO_H


class Rectangulo
{
    private:
        float base;
        float altura;
    public:
        Rectangulo(float,float);
        virtual ~Rectangulo();
        void calcularArea();
        void calcularPerimetro();


};

#endif // CARRO_H


#include "stdfix.h"
#include "Carro.h"
#include "iostream"
#include "string"
using namespace std;

Rectangulo::Rectangulo(float _base,float _altura)
{
    base=_base;
    altura=_altura;
}

Rectangulo::~Rectangulo()
{
    //dtor
}
void Rectangulo::calcularArea()
{
    cout<<"El Area es : "<<base*altura<<endl;
}
void Rectangulo::calcularPerimetro()
{
    cout<<"El Perimetro es : "<<2*base + 2*altura;
}


EJERCICIO NUMERO 2
Se conoce de un alumno de la Universidad Nacional de San Agustín: CUI, nombre
completo y tres notas parciales (nota1, nota2, nota3). El programa con clases debe
imprimir: CUI, el primer nombre, el promedio de las tres notas e indique con un
mensaje si el alumno aprobó (nota final >= 10.5) o no aprobó (nota final < 10.5) la
asignatura de Ciencias de la Computación II.

#include <iostream>
#include <carro.h>
#include <Notas.h>
#include <Edad.h>
#include <Lista.h>
#include <stdfix.h>
#include <array>
using namespace std;
int main()
{

    int cui;
    string alumno;
    float nota,nota2,nota3,aux=0;
    Notas nf = Notas(cui,alumno,nota,nota2,nota3,aux);
    nf.notaFinal();
    return 0;
}


#ifndef NOTAS_H
#define NOTAS_H
#include <iostream>
using namespace std;

class Notas
{
    private:
        int cui;
        string alumno;
        float nota;
        float nota2;
        float nota3;
        float aux;

    public:
        Notas(int,string,float,float,float,float);
        virtual ~Notas();
        void notaFinal();



};

#endif // NOTAS_H

#include "Notas.h"
#include <iostream>
#include <stdfix.h>
#include <string>
using namespace std;
Notas::Notas(int _cui,string _alumno,float _nota,float _nota2,float _nota3,float _aux)
{
    cui= _cui;
    alumno= _alumno;
    nota= _nota;
    nota2= _nota2;
    nota3= _nota3;
    aux= _aux;
    //ctor
}

Notas::~Notas()
{
    //dtor
}
void Notas::notaFinal()
{
    cout<<" \t--- Notas Finales ---"<<endl;
    cout<<" \n Ingrese Nombre Del Alumno : ";getline(cin,alumno);
    cout<<" Ingrese CUI Del Alumno: ";cin>>cui;
    cout<<" \n Ingrese Las 3 Del Alumno: "<<endl;
    cout<<" \n NOTA 1: ";cin>>nota;
    cout<<" NOTA 2: ";cin>>nota2;
    cout<<" NOTA 3: ";cin>>nota3;
    aux=(nota+nota2+nota3)/3;
    cout<<"EL PROMEDIO ES : "<<aux;
    if(aux<10.5){
        cout<<" -- ALUMNO DESAPROBADO -- "<<endl;
    }
    else{
            cout<<" -- ALUMNO APROBADO -- "<<endl;
    }
}


EJERCICIO NUMERO 3
Implemente un programa con clases que lea la fecha de nacimiento y la fecha de hoy
y muestre por pantalla el nombre y la edad de la persona.

#include <iostream>
#include <carro.h>
#include <Notas.h>
#include <Edad.h>
#include <Lista.h>
#include <stdfix.h>
#include <array>
using namespace std;
int main()
{
    string nombre;
    int dActual,mActual,aActual;
    int dNacimiento,mNacimiento,aNacimiento;
    int respuestaDia,respuestaMes;
    Edad e1 = Edad(nombre,dActual,mActual,aActual,dNacimiento,mNacimiento,aNacimiento,respuestaDia,respuestaMes);
    e1.calcularAnios();

    return 0;
}

#ifndef EDAD_H
#define EDAD_H
#include <iostream>
using namespace std;

class Edad
{
    private:
        string nombre;
        int dActual;
        int mActual;
        int aActual;
        int dNacimiento;
        int mNacimiento;
        int aNacimiento;
        int respuestaDia;
        int respuestaMes;
    public:
        Edad(string,int,int,int,int,int,int,int,int);
        virtual ~Edad();
        void calcularAnios();

};

#endif // EDAD_H


#include "Edad.h"
#include <iostream>
using namespace std;
Edad::Edad(string _nombre,int _dActual,int _mActual,int _aActual,int _dNacimiento,int _mNacimiento,int _aNacimiento,int _respuestaDia,int _respuestaMes)
{
   nombre = _nombre;
   dActual= _dActual;
   mActual= _mActual;
   aActual= _aActual;
   dNacimiento = _dNacimiento;
   mNacimiento = _mNacimiento;
   aNacimiento = _aNacimiento;
   respuestaDia= _respuestaDia;
   respuestaMes= _respuestaMes;
}

Edad::~Edad()
{
    //dtor
}
void Edad::calcularAnios()
{

    cout<< "\n\t-- Programa que calcula la Edad, Mes y Dia --\n\n";
    cout<<"Ingrese su Nombre: ";getline(cin,nombre);
    cout<< "Ingrese A"<<(char)164<<"o Actual: ";   cin >> aActual;
    cout<< "Ingrese Mes Actual: ";   cin >> mActual;
    cout<< "Ingrese Dia Actual: ";  cin >> dActual;
    cout<<" --------------------------------------- ";
    cout<< "\nIngrese A"<<(char)164<<"o Nacimiento: ";  cin >> aNacimiento;
    cout<< "Ingrese Mes de Nacimiento: ";  cin >> mNacimiento;
    cout<< "Ingrese Dia de Nacimiento: ";  cin >> dNacimiento;
    cout<<endl;
    cout<<nombre<<endl;
    if( dActual < dNacimiento )
    {
        dActual = dActual + 30;
        mActual = mActual - 1;
        respuestaDia = dActual - dNacimiento;
    }
    else
        respuestaDia = dActual - dNacimiento;
        if( mActual < mNacimiento )
    {

        mActual = mActual + 12;
        aActual = aActual - 1 ;
        respuestaMes = mActual - mNacimiento;
    }
        else
        respuestaMes = mActual - mNacimiento;
        cout<<"\n Usted. tiene \n"<<endl;
        cout<<" Edad: "<<aActual- aNacimiento<<endl;
        cout<<" Mes: "<< respuestaMes<<endl;
        cout<<" Dia: "<< respuestaDia<<endl;
}

