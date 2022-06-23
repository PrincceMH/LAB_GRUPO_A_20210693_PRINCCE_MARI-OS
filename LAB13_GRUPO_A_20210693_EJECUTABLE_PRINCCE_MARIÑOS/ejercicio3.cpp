#include <iostream>
using namespace std;

struct Jugadores{
	string nombre;
	int edad;
	float talla;
};
int main(int argc, char *argv[]) {
	Jugadores* jugador = new Jugadores[6];
	for(int i=0; i<5; i++){
		cout<<"Jugador "<<i+1<<" : ";cin.ignore();getline(cin,jugador[i].nombre);
		cout<<"edad: ";cin>>jugador[i].edad;
		cout<<"Estatura : ";cin>>jugador[i].talla;
		cout<<endl;

    }
    cout<<"Jugadores Menores de edad que superan la estatura de 1.70 mts"<<endl;
    for(int i=0;i<5; i++){
            float aux1;
            int aux2;
            aux1=jugador[i].talla;
            aux2=jugador[i].edad;

		if(aux1>1.70&&aux2<20)
        {
            cout<<" Jugador: "<<jugador[i].nombre<<endl;
            cout<<" Edad : "<<jugador[i].edad<<endl;
            cout<<" Estatura: "<<jugador[i].talla<<endl;
        }


	}
    return 0;

}
