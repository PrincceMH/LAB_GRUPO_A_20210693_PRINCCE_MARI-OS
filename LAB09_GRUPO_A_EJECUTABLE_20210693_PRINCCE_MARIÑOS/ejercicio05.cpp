#include <iostream>
using namespace std;
template <class T>
T ordernarAscendente(T *arr,int posi1, int posif)
{
    T aux;
    cout<<"\nORDENADO ASCENDENTE\n"<<endl;
    for (int i=posi1+1; i<=posif; i++)
    {
        for(int j=posi1 ; j<=posif - 1; j++)
        {
            if (*(arr+j) > *(arr+j+1))
            {
                aux = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = aux;
            }
        }
    }

}
template <class T>
T ordenarDescendente(T *arr,int posi1, int posif)
{
    T aux;
    cout<<"\nORDENADO DESCENDENTE\n"<<endl;
    for (int i=posi1+1; i<=posif; i++)
    {
        for(int j=posi1 ; j<=posif - 1; j++)
        {
            if (*(arr+j) < *(arr+j+1))
            {
                aux = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = aux;
            }
        }
    }

}
template <class T>
T imprimirArr(T *arr,int posi1, int posif)
{
    for (int i=posi1; i<=posif; i++)
    {
        cout<<*(arr+i)<<" ";
    }
}
int main()
{
    int ArrayEntero [9] = {5,7,2,8,9,1,3,4,6};
    float ArrayFloat [5] = {10.1, 8.4, 3.6, 4.4, 11.2};
    cout<<"\t\tArreglo Entero "<<endl;
    ordernarAscendente(ArrayEntero,0,8);
    imprimirArr(ArrayEntero,0,8);
     cout<<endl;
    ordenarDescendente(ArrayEntero,0,8);
    imprimirArr(ArrayEntero,0,8);
    cout<<endl;
    cout<<"\n\n\t\tArreglo Flotante "<<endl;
    ordernarAscendente(ArrayFloat,0,4);
    imprimirArr(ArrayFloat,0,4);
     cout<<endl;
    ordenarDescendente(ArrayFloat,0,4);
    imprimirArr(ArrayFloat,0,4);
     cout<<endl;
    return 0;
}
