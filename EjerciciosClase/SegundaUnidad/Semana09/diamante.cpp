#include <iostream>
#include <sstream>
using namespace std;

class Diamante{
private:
	char Medio;
	
public:
	
	Diamante(char);
	~Diamante(){}
	void GenerarRombo();
};

Diamante::Diamante(char _medio){
	Medio = _medio;
}

void Diamante::GenerarRombo(){
	int Puntos = Medio - 65;
	int Puntos_Medio = 0;
	
	string diamante;
	stringstream Romb;
	
	char i = 65;
	
	while (i <= Medio){ 
		for (int j = 0; j < Puntos; j++)
			Romb << "·";
		if (Puntos_Medio > 0){
			Romb << i;
			for (int j = 0; j < Puntos_Medio; j++)
				Romb << "·";
			Romb << i;
			Puntos_Medio++;
		}
		else
			Romb << i;
		for (int j = 0; j < Puntos; j++){
			Romb << "·";
		}
		
		Romb << "\n";
		Puntos--;
		Puntos_Medio++;
		i++;
	}
	i -= 2;
	Puntos = 1;
	Puntos_Medio -= 4;
	
	while (i >= 'A')
	{
		for (int j = 0; j < Puntos; j++)
			Romb << "·";
		if (Puntos_Medio > 0){
			Romb << i;
			for (int j = 0; j < Puntos_Medio; j++)
				Romb << "·";
			Romb << i;
			Puntos_Medio--;
		}
		else
			Romb << i;
		for (int j = 0; j < Puntos; j++)
			Romb << "·";
		
		Romb << "\n";
		Puntos++;
		Puntos_Medio--;
		i--;
	}
	
	diamante = Romb.str();
	
	cout<<diamante;
}

int main(int argc, char *argv[]) {
	
	Diamante D('E');
	D.GenerarRombo();
	return 0;
}

