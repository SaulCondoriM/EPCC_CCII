#include <iostream>
using namespace std;

class Tablero{
private:
	int x1, y1, x2, y2;
	string A[8][8];
	
public:
	Tablero();
	~Tablero(){}
	
	void setPosicionReina1(int, int);
	void setPosicionReina2(int, int);
	bool ComprobarSiSeAtacan();
	void MostrarTablero();
	
};

Tablero::Tablero(){
	
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			A[i][j] = "_";
		}
		
	}
}
void Tablero::setPosicionReina1(int _x1, int _y1){
	x1 = _x1;
	y1 = _y1;
	
	A[x1][y1] = "B";
}
void Tablero::setPosicionReina2(int _x2, int _y2){
	x2 = _x2;
	y2 = _y2;
	
	A[x2][y2] = "N";
}

bool Tablero::ComprobarSiSeAtacan(){
	if(x1 == x2){
		return true;
	}
	
	if(y1 == y2){
		return true;
	}
	
	if(abs(x1-x2) == abs(y1-y2)){
		return true;
	}
	
	return false;
}

void Tablero::MostrarTablero(){
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}


int main(int argc, char *argv[]) {
	
	Tablero T;
	
	T.setPosicionReina1(2,3);
	T.setPosicionReina2(5,6);
	T.MostrarTablero();
	
	if(T.ComprobarSiSeAtacan()){
		cout<<"\nLas reinas SI pueden atacarse";
	}
	else{
		cout<<"\nLas reunas NO pueden atacarse";
	}
	return 0;
}

