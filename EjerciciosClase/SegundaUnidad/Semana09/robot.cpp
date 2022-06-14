#include <iostream>
#include <vector>
#include <random>
#include <sstream>
using namespace std;

random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> rand_letras('A','Z');
uniform_int_distribution<> rand_numeros(0,9);

class Robot{
private:
	string nombreRobot;
	
public:
	Robot(){}
	~Robot(){}
	
	string generarNombre();
	void resetearRobot(vector <string>);
	void comprobarRepetido(vector <string>);
	void mostrarRobots(vector <string>);
};

string Robot::generarNombre(){
	
	int num1 = rand_numeros(gen);
	int num2 = rand_numeros(gen);
	int num3 = rand_numeros(gen);
	
	string str1;
	string str2;
	string str3;
	
	nombreRobot = char(rand_letras(gen));
	nombreRobot = nombreRobot + char(rand_letras(gen));
	
	stringstream ss;
	ss << num1;
	ss >>str1;
	
	nombreRobot = nombreRobot + str1;
	
	stringstream aa;
	aa << num2;
	aa >>str2;
	
	nombreRobot = nombreRobot + str2;
	
	stringstream bb;
	bb << num3;
	bb >>str3;
	
	nombreRobot = nombreRobot + str3;
	
	return nombreRobot;
	
}

void Robot::resetearRobot(vector<string> todosLosRobots){
	
	todosLosRobots.clear();
	
	cout<<"\nTODOS LOS ROBOTS HAN SIDO RESETEADOS. "<<endl;
	
}

void Robot::comprobarRepetido(vector<string> todosLosRobots){
	
	Robot aux;
	
	for(int i=0; i < todosLosRobots.size(); i++){
		for(int j = i + 1; j < todosLosRobots.size(); j++){
			if(todosLosRobots[i] == todosLosRobots[j]){
				cout<<"\nNombre repetido encontrado. Asignando nuevo nombre.";
				todosLosRobots[i] = aux.generarNombre();
				
			}
		}
	}
	
}

void Robot::mostrarRobots(vector<string> todosLosRobots){
	for(int i=0; i<todosLosRobots.size();i++){
		cout<<todosLosRobots[i]<<endl;
	}
}



int main(int argc, char *argv[]) {
	
	vector<string> todosLosRobots;
	
	Robot A;
	for(int i=0; i<100; i++){
		todosLosRobots.push_back(A.generarNombre());
	}
	
	A.mostrarRobots(todosLosRobots);
	
	A.resetearRobot(todosLosRobots);
	
	for(int i=0; i<100; i++){
		todosLosRobots.push_back(A.generarNombre());
	}
	
	A.mostrarRobots(todosLosRobots);

	
	return 0;
}

