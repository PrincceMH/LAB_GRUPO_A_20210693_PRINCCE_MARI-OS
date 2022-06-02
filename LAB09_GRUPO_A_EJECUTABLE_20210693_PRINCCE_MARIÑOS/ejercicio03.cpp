#include <iostream>
using namespace std;

template <class T,class P>
T correo(T a,P b) {
    for(int i=0;i<5;i++)
    {
        cout<<"Porfavor Ingrese un letra  : ";cin>>a;
        cout<<"Ahora Ingrese su apellido : ";cin>>b;
        cout<<"\n\t\tCorreo Generado : "<<a<<b<<"@unsa.edu.pe\n"<<endl;

    }

}


int main()
{
    char palabra;
    string apellido;

    correo(palabra,apellido);
    return 0;
}
