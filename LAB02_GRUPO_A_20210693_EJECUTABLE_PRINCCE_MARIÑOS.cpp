//EJERCICIO #1

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


//EJERCICIO #3

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



//EJERCICIO #5
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



//EJERCICIO #7
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

//EJERCICIO #8

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