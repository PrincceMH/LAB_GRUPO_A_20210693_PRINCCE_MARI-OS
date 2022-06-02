#include <iostream>
using namespace std;

template <class T>
T mayor(T a[]) {
    T mayor=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>mayor)
        {
            mayor=a[i];
        }

    }
    cout<<"El mayor es : "<<mayor<<endl;

}
template <class P>
P menor(P a[])
{
    P menor=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]<menor)
        {
            menor=a[i];
        }
    }
    cout<<"El menor es : "<<menor<<endl;
}

int main()
{
    int arr[5]={10,7,2,8,6};
    float arr2[5]={10.1, 8.4, 3.6, 4.4, 11.2};
    cout<<"Arreglo Entero\n"<<endl;
    mayor(arr);
    menor(arr);
    cout<<"\nArreglo flotante\n"<<endl;
    mayor(arr2);
    menor(arr2);
    return 0;
}
