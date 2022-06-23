#include <iostream>
using namespace std;
struct empleados{
	string nombre;
	string sexo;
	float salario;
};
int main(int argc, char *argv[]) {
    int n,auxMayor=0,auxMenor=0;
    float mayor=0,menor=999999;
    cout<<"Cuantos empleados desea ingresar?: ";cin>>n;
	empleados* empleado = new empleados[n];
	for(int i=0; i<n; i++){
		cout<<"Nombre: ";cin.ignore();getline(cin,empleado[i].nombre);
		cout<<"Sexo: ";cin.ignore();getline(cin,empleado[i].sexo);
		cout<<"Salario : ";cin>>empleado[i].salario;
		cout<<endl;

		if(empleado[i].salario>mayor)
        {
            mayor=empleado[i].salario;
            auxMayor=i;
        }
        if(empleado[i].salario<menor)
        {
            menor=empleado[i].salario;
            auxMenor=i;
        }
        cout<<endl;


    }
    cout<<"\t\tEl Mayor salario es para el empleado"<<endl;
    cout<<"\t\tNombre: "<<empleado[auxMayor].nombre<<endl;
    cout<<"\t\tNombre: "<<empleado[auxMayor].salario<<endl;
    cout<<endl;
    cout<<"\t\tEl Menor salario es para el empleado"<<endl;
    cout<<"\t\tNombre: "<<empleado[auxMenor].nombre<<endl;
    cout<<"\t\tNombre: "<<empleado[auxMenor].salario<<endl;

    return 0;

}
