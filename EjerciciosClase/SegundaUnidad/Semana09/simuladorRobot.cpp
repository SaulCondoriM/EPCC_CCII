#include <iostream>
using namespace std;

class direccionesRobot{
private:
	int x;
	int y;
	string direccion;
public:
	direccionesRobot(){};
	~direccionesRobot(){}
	
	void setX(int);
	void setY(int);
	void setDireccion(string);
	
	void Instruccion_D();
	void Instruccion_I();
	void Instruccion_A();
	void VariasInstrucciones(string);
	void MostrarUbicacionRobot();
};

void direccionesRobot::setX(int _x){
	x = _x;
}
void direccionesRobot::setY(int _y){
	y = _y;
}

void direccionesRobot::setDireccion(string _direccion){
	direccion = _direccion;
}

void direccionesRobot::Instruccion_D(){
	if(direccion == "O"){
		direccion = "N";
	}
	else if(direccion == "S"){
		direccion = "O";
	}
	else if(direccion == "E"){
		direccion = "S";
	}
	else{
		direccion = "E";
	}
}

void direccionesRobot::Instruccion_I(){
	if(direccion == "O"){
		direccion = "S";
	}
	else if(direccion == "S"){
		direccion = "E";
	}
	else if(direccion == "E"){
		direccion = "N";
	}
	else{
		direccion = "O";
	}
}

void direccionesRobot::Instruccion_A(){
	if(direccion == "O"){
		x--;
	}
	else if(direccion == "S"){
		y--;
	}
	else if(direccion == "E"){
		x++;
	}
	else{
		y++;
	}
}

void direccionesRobot::VariasInstrucciones(string instruccion){
	string letra;
	
	for(int i=0; i < instruccion.length(); i++){
		letra  = instruccion[i];
		if(letra == "D"){
			Instruccion_D();
		}
		else if(letra == "I"){
			Instruccion_I();
		}
		else if(letra == "A"){
			Instruccion_A();
		}
		else{
			cout<<"\nNo se reconoce la instruccion";
		}
	}
}

void direccionesRobot::MostrarUbicacionRobot(){
	cout<<"\nLa posicion del robot en X es: "<<x;
	cout<<"\nLa posicion del robot en Y es: "<<y;
	cout<<"\nEl robot esta mirando hacia el: "<<direccion;
}

int main(int argc, char *argv[]) {
	
	direccionesRobot A;
	A.setX(7);
	A.setY(3);
	A.setDireccion("N");
	
	A.MostrarUbicacionRobot();
	cout<<endl;
	
	A.VariasInstrucciones("DAAIAI");
	A.MostrarUbicacionRobot();

	return 0;
}

