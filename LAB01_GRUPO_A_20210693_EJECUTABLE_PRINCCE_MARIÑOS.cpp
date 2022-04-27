/EJERCICIO #1

#include <iostream>

using namespace std;

int main()
{
    int a;
    for(int i=2;i<=100;i++)
    {
         if(i%2==0)
            a +=i;

    }
    cout<<a;


    return 0;
}

//EJERCICIO #2

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Primer numero : ";cin>>a;
    cout << "Segundo numero : ";cin>>b;
    cout<<a*b;


    return 0;
}

//EJERCICIO #3

#include <iostream>
using namespace std;
int main()
{
    char a[10],b[10],c[10];
    cout<<"Nombre?: ";cin>>a;
    cout<<"Apellido Paterno?: ";cin>>b;
    cout<<"Apellido Materno?: ";cin>>c;
    cout<<"Correo Generado: "<<a[0]<<b<<c[0]<<"@unsa.edu.pe";

    return 0;
}


//EJERCICIO #5

#include <iostream>

using namespace std;


int main()
{
    int a=0;
    for(int i=5;i<=100;i+=5)
    {
      cout<<i<<endl;
      a=a+1;
    }
    return 0;
}



//EJERCICIO #11
#include <iostream>
using namespace std;
int main()
{
    int num,mayor,menor;
    int n,media;
    cout<<"cuantos numeros desea ingresar?: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cout<<"numero?";
    cin>>num;
        if(i==0)
        {
            mayor=num;
            menor=num;
        }
        else{
            if(num>mayor)
                mayor=num;
            if(num<menor)
                menor=num;
        }
    media=i+n/n;
    }
    cout<<"Numero mayor: "<<mayor<<"Numero menor: "<<menor<<endl;
    cout<<" La media es : "<<media;
	return 0;
}


//EJERCICIO #13

#include <iostream>
using namespace std;
int main(){
     int a,b;
     cout<<" numero 1: ";cin>>a;
     cout<<" numero 2: ";cin>>b;
     if(a%b==0){
            cout<<b<<" es divisor de "<<a;
     }else{
        if(b%a==0){
        cout<<a<<" es divisor de "<<b;
        }else{
        cout<<"NO SON DIVISORES";
            }
     }
return 0;
}



//EJERCICIO #14
#include <iostream>
#include <string>
using namespace std;
int main(){
    float   nota1,nota2, nota3,p;
    string nombre;
    cout<<"INGRESE SU NOMBRE: ";cin>>nombre;
    cout<<"INGRESE LA PRIMERA NOTA: ";cin>>nota1;
    cout<<"INGRESE LA SEGUNDA NOTA: ";cin>>nota2;
    cout<<"INGRESE LA TERCERA NOTA: ";cin>>nota3;
    p=(nota1 + nota2 + nota3)/3;
    cout<<"ESTUDIANTE: "<<nombre<<endl;
    cout<<"PROMEDIO OBTENIDO ES: "<<p<<endl;

return 0;
}

//EJERCICIO #15

#include <iostream>

using namespace std;


int main()
{
    int a;
    cout<<"numero?: ";cin>>a;
    for(int i=1;i<=12;i++)
    {
      cout<<a<<" X "<<i<<" = "<<a*i<<endl;
    }
    return 0;
}

//EJERCICIO #16

#include <iostream>

using namespace std;

int main()
{
    float aux;
    float n,m;
    cout << "cuantos numeros ingresara  ?: " << endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        aux+=m;
    }


    cout<<"la media es: "<<aux/n;
    return 0;
}

//EJERCICIO #17
#include <iostream>
using namespace std;
int main()
{
     int a,aux=0,num=1,num2=1;
     while(num<=10)
     {
     cout<<"numeros?: ";
     cin>>a;
     if(a<0)
     aux+=a;
     num++;
     }
     cout<<"suma de impares: "<<aux<<endl;
 return 0;
}
