Ejercicio Numero 1
Crear una clase Persona del cual tendrá métodos asignar una edad y nombre. Una
segunda clase, alumno, tendrá que heredar este contenido y a través de esta clase
poder asignar los datos de edad y nombre de los estudiantes.

//Persona.h
#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
using namespace std;

class Persona {
    protected:
        string nombre;
		int edad;

	public:
		Persona();
		~Persona();
		void nombreEdad();

};

#endif

//Persona.cpp
#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona() {

}

Persona::~Persona() {

}

void Persona::nombreEdad(){
	cout<<"Nombre del alumno : "<< nombre<<endl;
	cout<<"Edad: " << edad << " A"<<(char)164<<"os"<<endl;
}


//Alumno.h
#ifndef ALUMNO_H
#define ALUMNO_H
#include <Persona.h>
#include <iostream>

using namespace std;

class Alumno : public Persona
{
    public:
        Alumno(string,int);
        ~Alumno();
        void nombreEdad2();
    private:
};

#endif // ALUMNO_H

//Alumno.cpp

#include "Alumno.h"
#include <iostream>
using namespace std;

Alumno::Alumno(string _nombre, int _edad)
{
    nombre= _nombre;
	edad= _edad;

}

Alumno::~Alumno() {

}

void Alumno::nombreEdad2(){
	cout<<"EL nombre del alumno es : "<<nombre<<" y tiene : "<<edad<<endl;
}


Ejercicio Numero 2
Crear una clase Color que mantenga 3 valores (RGB). Una segunda clase Material,
tendrá como información una variable de texto que describa algún material (Ejemplo:
madera, vidrio, platico, etc.) Una tercera clase, Objetos, deberá de heredar contenido
de ambas clases con la finalidad de describir diferentes objetos en cuanto a color y el
material. (Ejemplo: mesa de color café y material de plástico)


//Color.h
#ifndef COLOR_H
#define COLOR_H
#include <iostream>
using namespace std;

class Color
{
    private:
        string rgb;
    public:
        Color(string);
        ~Color();
        void matel();


};

#endif // COLOR_H

//Color.cpp
#include "Color.h"

Color::Color(string _rgb)
{
    rgb= _rgb;
}

Color::~Color()
{
    //dtor
}

void Color::matel(){
    cout<<rgb;
}

//Material.h
#ifndef MATERIAL_H
#define MATERIAL_H
#include <iostream>
using namespace std;

class Material
{
    private:
        string material;
    public:
        Material(string);
        ~Material();
        void primerMaterial();

    protected:


};

#endif // MATERIAL_H


//Material.cpp

#include "Material.h"

Material::Material(string _material)
{
    material= _material;
}

Material::~Material()
{
    //dtor
}

void Material::primerMaterial(){
    cout<<material;
}

//Objeto.h

#ifndef OBJETOS_H
#define OBJETOS_H
#include <iostream>
#include <Color.h>
#include <Material.h>

using namespace std;

class Objetos : public Color, public Material
{
    private:
        string objeto;
    public:
        Objetos(string, string, string);
        virtual ~Objetos();
        void Objeto();


};

#endif // OBJETOS_H

//Objeto.cpp

#include "Objetos.h"

Objetos::Objetos(string _rgb, string _material, string _objeto) : Color ( _rgb), Material(_material)
{
    objeto = _objeto;
}

Objetos::~Objetos()
{
    //dtor
}

void Objetos::Objeto(){
    cout<<objeto<<" de color ";
    matel();
    cout<<" y material de ";
    primerMaterial();
}

//main.cpp
#include <iostream>
#include "Objetos.h"
using namespace std;


int main(){
    Objetos o1 = Objetos("Rojo", "plastico", "Mesa");
    o1.Objeto();
    return 0;
}

EJERCICIO NUMERO 4

Escribe una clase de nombre ClaseDisco, que herede de la clase ClaseMultimedia los
atributos y métodos definidos por usted. La clase ClaseDisco tiene, aparte de los
elementos heredados, un atributo más también definido por usted. Al momento de
imprimir la información debe mostrase por pantalla toda la información.
#include <iostream>
#include "Disco.h"

using namespace std;

int main()
{
    Disco c1 = Disco("Raw", "Urbano", "PUERTO RIQUEÑO");
    c1.cant();
    return 0;
}

#ifndef CLASEMULTIMEDIA_H
#define CLASEMULTIMEDIA_H

#include <iostream>
using namespace std;
class Multimedia
{
    private:
        string artista;
        string genero;

    public:
        Multimedia(string, string);
        virtual ~Multimedia();
        void generoC();

};

#endif // CLASEMULTIMEDIA_H


#include "Multimedia.h"

Multimedia::Multimedia(string _artista,string _genero)
{
    artista= _artista;
    genero= _genero;
}

Multimedia::~Multimedia()
{
    //dtor
}
void Multimedia::generoC()
{
    cout<<"Nombre: "<<artista<<" y Genero: "<<genero<<endl;
}

#ifndef DISCO_H
#define DISCO_H

#include <Multimedia.h>
#include <iostream>
using namespace std;

class Disco : public Multimedia
{
    private:
        string cantante;
    public:
        Disco(string,string,string);
        ~Disco();
        void cant();

};

#endif // DISCO_H

#include "Disco.h"

Disco::Disco(string _artista,string _genero, string _cantante) : Multimedia(_artista,_genero)
{
    cantante= _cantante;
}

Disco::~Disco()
{
    //dtor
}
void Disco::cant(){
    cout<<"El cantante es "<<cantante<<endl;
    generoC();

}