#include <iostream>
using namespace std;


void Buscar(string **&Ma){
	string opcion;
	string dato;
	cout<<"1)Desea buscar por nombre"<<endl;
	cout<<"2)Desea buscar por codigo"<<endl;
	cout<<"3) Regresar al Menu anterior"<<endl;
	cin>>opcion;
	while(true){
		if(opcion=="1"){
			cout<<"Ingrese el nombre del producto que deseas buscar"<<endl;
			cin>>dato;
			for(int i=0; i<10;i++){
				if((Ma[i][0]==dato)&&(Ma[i][0]!="0")){
					cout<<"Nombre del producto: "<<Ma[i][0]<<endl;
					cout<<"Codigo del producto: "<<Ma[i][0]<<endl;
					cout<<"Precio del producto: "<<Ma[i][0]<<endl;
					cout<<"Stock del producto: "<<Ma[i][0]<<endl;
				}
				else{
					cout<<"No existe producto o fue dado de baja"<<endl;
				}
			}
		}
		else if(opcion=="2"){
			cout<<"Ingrese el codigo del producto que deseas buscar"<<endl;
			cin>>dato;
			for(int i=0; i<10;i++){
				if((Ma[i][1]==dato)&&(Ma[i][0]!="0")){
					cout<<"Nombre del producto: "<<Ma[i][0]<<endl;
					cout<<"Codigo del producto: "<<Ma[i][0]<<endl;
					cout<<"Precio del producto: "<<Ma[i][0]<<endl;
					cout<<"Stock del producto: "<<Ma[i][0]<<endl;
				}
				else{
					cout<<"No existe producto o fue dado de baja"<<endl;
				}
			}
		}
		else if(opcion=="3"){
			break;
		}
		else{
			cout<<"El valor ingresado es incorrecto, vuela a intentar"<<endl;
		}
	}
}
void Modificar(string **&Ma){
	int num;
	int num2;
	string opcion;
	string dato;
	for(int i=0;i<10;i++){
		cout<<" "<<i+1<<") ";
		for(int j=0;j<4;j++){
			cout<<Ma[i][j]<<" ";
		}
		cout<<endl;
	}
	while(true){
		cout<<"Ingrese el numero del producto que deses modificar"<<endl;
		cin>>num;
		num2=num-1;
		cout<<"Que desea modificar"<<endl;
		cout<<"1) Desea modificar el nombre"<<endl;
		cout<<"2) Desea modificar el codigo"<<endl;
		cout<<"3) Desea modificar el precio"<<endl;
		cout<<"4) Desea modificar el stock"<<endl;
		cout<<"5) Regresar al Menu anterior"<<endl;
		cin>>opcion;
		if(opcion=="1"){
			cout<<"Ingrese el nuevo nombre del producto "<<endl;
			cin>>dato;
			Ma[num2][0]=dato;
		}
		else if(opcion=="2"){
			cout<<"Ingrese el nuevo codigo del producto "<<endl;
			cin>>dato;
			Ma[num2][1]=dato;
		}
		else if(opcion=="3"){
			cout<<"Ingrese el nuevo precio del producto "<<endl;
			cin>>dato;
			Ma[num2][2]=dato;
		}
		else if(opcion=="4"){
			cout<<"Ingrese el nuevo stock del producto "<<endl;
			cin>>dato;
			Ma[num2][3]=dato;
		}
		else if(opcion=="5"){
			break;
		}
		else{
			cout<<"El valor ingresado es incorrecto, vuela a intentar"<<endl;
		}
	}

}
void insertarDato(string **&Ma){
	for(int j=0; j<10;j++){
		for(int k=0;k<4;k++){
			if(Ma[j][k]=="0"){
				for(int i=0; i<10;i++){
					cout<<"Ingrese el nombre del producto " <<i+1<<" : ";
					cin>>Ma[i][0];
					cout<<"Ingrese el codigo del producto " <<i+1<<" : ";
					cin>>Ma[i][1];
					cout<<"Ingrese el precio del producto " <<i+1<<" : ";
					cin>>Ma[i][2];
					cout<<"Ingrese el cantidad de stock del producto " <<i+1<<" : ";
					cin>>Ma[i][3];
				}
			}
		}
	}
}
void imprimir(string **Ma){
	for(int i=0;i<10;i++){
		for(int j=0; j<4; j++){
			if(Ma[i][3]!="0"){
				cout<<Ma[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}
void DarBaja(string **&Ma){
	string opcion;
	string dato;
	while (true){
		cout<<"1)Desea dar de baja por nombre"<<endl;
		cout<<"2)Desea dar de baja por codigo"<<endl;
		cout<<"3) Regresar al Menu anterior"<<endl;
		cin>>opcion;
		if(opcion=="1"){
			cout<<"Ingrese el nombre del producto que deseas dar de baja"<<endl;
			cin>>dato;
			for(int i=0; i<10;i++){
				if(Ma[i][0]==dato){
					Ma[i][3]="0";
				}
			}
		}
		else if(opcion=="2"){
			cout<<"Ingrese el codigo del producto que deseas dar de baja"<<endl;
			cin>>dato;
			for(int i=0; i<10;i++){
				if(Ma[i][1]==dato){
					Ma[i][3]="0";
				}
			}
		}
		else if(opcion=="3"){
			break;
		}
		else{
			cout<<"El valor ingresado es incorrecto, vuela a intentar"<<endl;
		}
	}

}
void DarAlta(string **&Ma){
	string opcion;
	string dato;
	string num;
	while (true){
		cout<<"1) Desea dar de alta por nombre"<<endl;
		cout<<"2) Desea dar de alta por codigo"<<endl;
		cout<<"3) Ver que productos se dieron de baja"<<endl;
		cout<<"4) Regresar al Menu anterior"<<endl;
		cin>>opcion;
		if(opcion=="1"){
			cout<<"Ingrese el nombre del producto que deseas dar de alta"<<endl;
			cin>>dato;
			for(int i=0; i<10;i++){
				if((Ma[i][0]==dato)&&(Ma[i][3]=="0")){
					cout<<"Coloque el stock que tiene: "<<endl;
					cin>>num;
					Ma[i][3]=num;
				}
			}
		}
		else if(opcion=="2"){
			cout<<"Ingrese el codigo del producto que deseas dar de alta"<<endl;
			cin>>dato;
			for(int i=0; i<10;i++){
				if((Ma[i][1]==dato)&&(Ma[i][3]=="0")){
					cout<<"Coloque el stock que tiene: "<<endl;
					cin>>num;
					Ma[i][3]=num;
				}
			}
		}
		else if(opcion=="3"){
			for(int i=0; i<10;i++){
				if(Ma[i][3]=="0"){
					cout<<"El producto "<<Ma[i][0]<<" con codigo "<<Ma[i][1]<<" esta dado de baja"<<endl;
				}
			}
		}
		else if(opcion=="4"){
			break;
		}
		else{
			cout<<"El valor ingresado es incorrecto, vuela a intentar"<<endl;
		}
	}
}
int main(int argc, char *argv[]) {
	string **producto = new string*  [10];
	for (int i = 0; i < 10; i++) {
		producto[i] = new string [4];
	}
	for(int i=0; i<10;i++){
		for(int j=0;j<4;j++){
			producto[i][j]="0";
		}
	}
	for(int i=0; i<10;i++)
	{
		for(int j=0;j<4;j++){
			cout<<producto[i][j];
		}
		cout<<endl;
	}
	string opcion;
	while(true){
		cout<<"**********Menu**********"<<endl<<endl;
		cout<<"1) Agregar productos"<<endl;
		cout<<"2) Dar de Alta un producto"<<endl;
		cout<<"3) Dar de Baja un producto "<<endl;
		cout<<"4) Modidificar"<<endl;
		cout<<"5) Imprimir"<<endl;
		cout<<"6) Salir"<<endl;
		cin>>opcion;
		if(opcion=="1"){
			insertarDato(producto);
		}
		else if(opcion=="2"){
			DarAlta(producto);
		}
		else if(opcion=="3")
		{
			Darbaja(producto);
		}
		else if (opcion=="4"){
			Modificar(producto);
		}
		else if(opcion=="5"){
			imprimir(producto);
		}
		else if(opcion=="6"){
			break;
		}
		else{
			cout<<"El valor ingresado es incorrecto, vuela a intentar"<<endl;
		}

	}
	return 0;
}
