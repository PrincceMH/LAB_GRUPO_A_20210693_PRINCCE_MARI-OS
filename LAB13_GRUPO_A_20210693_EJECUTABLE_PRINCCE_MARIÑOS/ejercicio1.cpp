#include <iostream>
#include<ctime>
using namespace std;
struct Persona {
	string nombre;
	int dia, mes;
};
void cumpleanios(int n)
{
    Persona* alumnos = new Persona[n];
	for (int i = 0; i < n; i++) {
		cout << "Nombre Completo del alumno numero "<<i+1<<": ";cin.ignore();getline(cin,alumnos[i].nombre);
		cout << "Dia de cumplea"<<char(164)<<"os del alumno "<<i+1<<" : ";cin >> alumnos[i].dia;
		cout << "Mes del cumple"<<char(164)<<"os del alumno "<<i+1<<" : ";cin >> alumnos[i].mes;
	}
	time_t now= time(0);
	tm* time= localtime(&now);
	for(int i=0; i<n; i++){
		if((time->tm_mon)+1==alumnos[i].mes){
			cout<<"\n\nFelicidades el cumplea"<<char(164)<<"os de --> "<<alumnos[i].nombre<<" <-- Es en este mes"<<endl;
		}
	}
}
int main() {

	int n;
	cout << "Cuantas Persona desea Inngresar ? : ";
	cin>>n;
	cumpleanios(n);

	return 0;
}

