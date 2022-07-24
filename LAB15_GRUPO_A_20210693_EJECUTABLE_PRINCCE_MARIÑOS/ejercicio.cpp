#include <iostream>
#include <vector>
using namespace std;
class Automovil{
    public:
        std::vector<std::string> piezas;
        std::vector<std::string> colores;
        void ListaPiezas()const {
            cout << " [Piezas]  [Color] \n\n";
            for (size_t i = 0; i < piezas.size(); i++) {
                if (piezas[i] == piezas.back()) {
                    cout <<" "<< piezas[i];
                    cout <<"   "<< colores[i];
                }
                else {
                    cout <<" "<< piezas[i];
                    cout <<"   "<< colores[i]<<"\n";
                }
            }
        }
};


class PartesBuilder {
    public:
        virtual ~PartesBuilder() {}
        virtual void ConstPuerta(string) const = 0;
        virtual void ConstLlanta(string) const = 0;
        virtual void ConstTimon(string) const = 0;
        virtual void ConstAsiento(string) const = 0;
        virtual void ConstMotor(string) const = 0;
        virtual void ConstEspejo(string) const = 0;
        virtual void ConstLunas(string) const = 0;
};


class BuilderEspecifico : public PartesBuilder {
    private:
        Automovil* product;
    public:
        BuilderEspecifico() {
            this->Reset();
        }
        ~BuilderEspecifico() {
            delete product;
        }
        void Reset() {
            this->product = new Automovil();
        }
        void ConstPuerta(string color)const override {
            this->product->piezas.push_back("Puertas");
            this->product->colores.push_back(color);
        }
        void ConstLlanta(string color)const override {
            this->product->piezas.push_back("Llantas");
            this->product->colores.push_back(color);
        }
        void ConstTimon(string color)const override {
            this->product->piezas.push_back("Timon");
            this->product->colores.push_back(color);
        }
        void ConstAsiento(string color)const override {
            this->product->piezas.push_back("Asiento");
            this->product->colores.push_back(color);
        }
        void ConstMotor(string color)const override {
            this->product->piezas.push_back("Motor");
            this->product->colores.push_back(color);
        }
        void ConstEspejo(string color)const override {
            this->product->piezas.push_back("Espejo");
            this->product->colores.push_back(color);
        }
        void ConstLunas(string color)const override {
            this->product->piezas.push_back("Lunas");
            this->product->colores.push_back(color);
        }

        Automovil* GetProducto() {
            Automovil* resultado = this->product;
            this->Reset();
            return resultado;
        }
};

class Director {
    private:
        PartesBuilder* Builder;
    public:
        void set_builder(PartesBuilder* Builder) {
            this->Builder = Builder;
        }
};


void ClienteCode(Director& director){
    BuilderEspecifico* Builder = new BuilderEspecifico();
    director.set_builder(Builder);
    int opcion;
    do{
    	cout << " ---  Piezas  Disponibles  ---\n"<<endl;
    	cout << " [1-Motor]"<<endl;
    	cout << " [2-Llanta]"<<endl;
    	cout << " [3-Puerta]"<<endl;
    	cout << " [4-Asiento]"<<endl;
    	cout << " [5-Timon]"<<endl;
    	cout << " [6-Espejo]"<<endl;
    	cout << " [7-Lunas]"<<endl;
    	cout << " [8-Terminar]"<<endl;
    	cout << " Ingrese una opcion porfavor : ";cin>>opcion;
    	int op;
    	string color;
    	switch(opcion){
    		case 1:
    			cout << " \nNota: si no ingresa el color que desea se le asignara  el color de fabrica"<<endl;
				cout <<" 1- Ingresar Color de preferencia "<<endl;
				cout <<" 2- Color por defecto "<<endl;cout<<"opcion?: ";
    			cin>>op;
    			if(op==1){
    				cout << " Ingrese el color que desea : ";cin>>color;
    				Builder->ConstPuerta(color);
				}
				else{
					Builder->ConstPuerta("Negro");
				}
				break;
			case 2:
				cout << " \nNota: si no ingresa el color que desea se le asignara  el color de fabrica"<<endl;
				cout <<" 1- Ingresar Color de preferencia "<<endl;
				cout <<" 2- Color por defecto "<<endl;cout<<"opcion?: ";
    			cin>>op;
    			if(op==1){
    				cout << " Ingrese el color que desea : ";cin>>color;
    				Builder->ConstLlanta(color);
				}
				else{
					Builder->ConstLlanta("Negro");
				}
				break;
			case 3:
				cout << " \nNota: si no ingresa el color que desea se le asignara  el color de fabrica"<<endl;
				cout <<" 1- Ingresar Color de preferencia "<<endl;
				cout <<" 2- Color por defecto "<<endl;
				cout<<"opcion?: ";cin>>op;
    			if(op==1){
    				cout << " Ingrese el color que desea : ";cin>>color;
    				Builder->ConstTimon(color);
				}
				else{
					Builder->ConstTimon("Negro");
				}
				break;
			case 4:
				cout << " \nNota: si no ingresa el color que desea se le asignara  el color de fabrica"<<endl;
				cout <<" 1- Ingresar Color de preferencia "<<endl;
				cout <<" 2- Color por defecto "<<endl;
				cout<<"opcion?: ";
    			if(op==1){
    				cout << " Ingrese el color que desea : ";cin>>color;
    				Builder->ConstAsiento(color);
				}
				else{
					Builder->ConstAsiento("Negro");
				}
				break;
			case 5:
				cout << " \nNota: si no ingresa el color que desea se le asignara  el color de fabrica"<<endl;
				cout <<" 1- Ingresar Color de preferencia "<<endl;
				cout <<" 2- Color por defecto "<<endl;
				cout<<"opcion?: ";
    			cin>>op;
    			if(op==1){
    				cout << " Ingrese el color que desea : ";cin>>color;
    				Builder->ConstMotor(color);
				}
				else{
					Builder->ConstMotor("Negro");
				}
				break;
			case 6:
				cout << " \nNota: si no ingresa el color que desea se le asignara  el color de fabrica"<<endl;
				cout <<" 1- Ingresar Color de preferencia "<<endl;
				cout <<" 2- Color por defecto "<<endl;
				cout<<"opcion?: ";
    			cin>>op;
    			if(op==1){
    				cout << " Ingrese el color que desea : ";cin>>color;
    				Builder->ConstEspejo(color);
				}
				else{
					Builder->ConstEspejo("Negro");
				}
				break;
			case 7:
				cout << " \nNota: si no ingresa el color que desea se le asignara  el color de fabrica"<<endl;
				cout <<" 1- Ingresar Color de preferencia "<<endl;
				cout <<" 2- Color por defecto "<<endl;
				cout<<"opcion?: ";
    			if(op==1){
    				cout << " Ingrese el color que desea : ";cin>>color;
    				Builder->ConstLunas(color);
				}
				else{
					Builder->ConstLunas("Negro");
				}
				break;
			case 8:
				break;
		}
	}while(opcion!=8);
	cout<<"\n";
	Automovil* p = Builder->GetProducto();
    p->ListaPiezas();
    delete p;
    delete Builder;
}


int main() {
    Director* director = new Director();
    ClienteCode(*director);
    delete director;
    return 0;
}
