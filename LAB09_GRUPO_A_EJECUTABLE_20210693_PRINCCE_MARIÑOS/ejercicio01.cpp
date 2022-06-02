#include <iostream>
using namespace std;

template <class T,class P,class H>
T mayorYmenor(T a,P b,H c) {
    P mayor,menor;
    if(a>b&&a>c)
    {
        mayor=a;
    }
    else{
            menor=a;
        }
    if(b>a&&b>c)
    {
         mayor=b;

    }else{
        menor=b;
    }

    if(c>a&&c>b)
    {
        mayor=c;
    }else{
        menor=c;
    }

    cout<<"EL mayor es : "<<mayor<<endl;
    cout<<"El menor es : "<<menor<<endl;
}


int main()
{
    int numero=15;
    float numero2=17.5;
    double numero3= 0.265685;
    cout<<"Numeros -> "<<numero<<" - "<<numero2<<" - "<<numero3<<" "<<endl;
    mayorYmenor(numero,numero2,numero3);
    return 0;
}
