#include <iostream>
using namespace std;
struct Alumnos{
	string nombre;
	char grupo;
	float PFase;
	float SFase;
	float TFase;
	float PFinal;

};

int main(int argc, char *argv[]) {
	int n;

	cout<<"Cuantos Alumnos desea ingresar? : ";cin>>n;
	Alumnos* alumnos = new Alumnos[n];
	for(int i=0; i<n; i++){
		cout<<"Ingrese el nombre del alumno "<<i+1<<" : ";cin.ignore();getline(cin,alumnos[i].nombre);
		cout<<"Grupo A/B/C ?: ";cin>>alumnos[i].grupo;
		cout<<"Nota de la Primera Fase: ";cin>>alumnos[i].PFase;
		cout<<"Nota de la Segunda Fase: ";cin>>alumnos[i].SFase;
		cout<<"Nota de la Tercera Fase: ";cin>>alumnos[i].TFase;
		cout<<"Nota del Proyecto Final: ";cin>>alumnos[i].PFinal;
		cout<<endl;
		float aux=0,aux2=0;
        aux=(alumnos[i].PFase*(15/100.0))+(alumnos[i].SFase*(20/100.0));
        aux2=(alumnos[i].TFase*(25/100.0))+(alumnos[i].PFinal*(40/100.0));
		cout<<"\t\tPromedio Final  : "<<aux+aux2<<"\n  Alumno: "<<alumnos[i].nombre<<" Grupo "<<alumnos[i].grupo<<endl;
		cout<<endl;

	}

	return 0;
}
