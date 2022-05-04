/*ERCICIO NUMERO 1
Escribir un programa donde se pueda ingresar los datos de tres personas, como el
nombre, apellido, edad y DNI y luego lo muestre por pantalla.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string nombre[3];
    string apellido[3];
    int edad[3];
    int dni[3];
    cout << "Por favor ingrese la siguiente información de las personas : \n";
    for(int i = 0; i<3;i++)
    {
        cout << "\n******* persona " << i + 1 <<"********:\n";
        cout << "Nombre : ";
        cin>>nombre[i];
        cout << "Apellido: ";
        cin>>apellido[i];
        cout<<"Edad: ";
        cin>>edad[i];
        cout<<"Dni: ";
        cin>>dni[i];

    }
}
*/

/*EJERCICIO NUMERO 2
Hacer un array unidimensional que acepte ocho números enteros. Luego le
pregunte al usuario que ingrese un número a buscar, implementar una función que
busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
contrario, retornar falso.

#include <iostream>
using namespace std;
const int d = 8;
bool buscar(int a[],int b){
 for(int i = 0; i < d; i++){
 if(b == a[i]){ return true; }
 }
 return false;
}

int main(){
     int vector[d],n,a;

     cout<<"Ingrese 8 numeros  enteros: ";
     for(int i = 0; i < d; i++){
      cin >> vector[i];
     }
     cout<<"Ingrese un N a buscar en el vector: ";
     cin>>n;
     a = buscar(vector,n);
     if(a){ cout << " --El numero si se encuentra en el array-- "; }
     else{ cout<<" El numero no se encuentra en el array "; }
     return 0;
}  */

/*EJERCICIO NUMERO 3
Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
debe mostrar la suma de todos los números que estén en una fila par.

#include <iostream>
using namespace std;

int suma(int arr[5][3],int a,int b)
{
     int suma = 0;
     for(a = 0;a < 5;a += 2){
      for(b = 0; b <3 ; b++){
            suma += arr[a][b];
      }
     }
 return suma;
}


int main(){
    int arr[5][3];
    int a,b;
    cout<<" --- Ingrese los numeros para el array  ---"<<endl;
    for(a = 0; a < 5; a++){
            cout<<" --- fila "<<a+1<<" --- "<<endl;
        for(b = 0; b < 3; b++)
        {
            cin>>arr[a][b];
        }
    }
    cout<<" Suma de filas pares : "<<suma(arr,a,b);
    return 0;
    }
*/

/*EJERCICIO NUMERO 4
Implementar un programa que rellene un array con los números primos
comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.

#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int i,j,cont,aux;

    aux=0;
    for (i=1;i<=100;i++)
    {
        cont=0;
        for (j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                cont++;
            }
        }

        if (cont==2 || j==1 || j==0)
        {
            arr[aux]=i;
            aux++;
        }

    }

    for (i=aux;i>=1;i--)
    {
    cout<<arr[i-1]<<endl;
    }
return 0;
}
*/

/*EJERCICIO NUMERO 6
Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma.

#include <iostream>
using namespace std;
int main () {
    int matriz[3][3];
    int i,j, suma=0, f=0, mayor=0;

    for (i=0;i<3;i++) {
            cout<<"Introduce la fila "<<i+1<<endl;
        for (j=0;j<3;j++)
        {

            cin>>matriz[i][j];
        }
        cout<<"\n Fila "<<i+1<<" completada\n"<<endl;
    }

    for (i=0;i<3;i++) {
        suma=0;
        f=i+1;
        for (j=0;j<3;j++) {
            suma+=matriz[i][j];
            if (suma > mayor) {
                mayor=suma;
            }
        }
    }
    cout<<endl;
    cout<<"--->  Fila con suma mayor es: "<<f<<" <---";
    cout<< "\nResultado : "<<mayor;

    return 0;
} */
