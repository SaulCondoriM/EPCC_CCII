#include <iostream>
#include <random>
using namespace std;

random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> rand_letras('A','Z');
uniform_int_distribution<> rand_numeros(1,5);

class Ficha{
private:
	char letra;
	int valor;
public:
	Ficha(){}
	~Ficha(){}
	
	void setLetra(char);
	void setValor(int);
	void Mostrar();
};

void Ficha::setLetra(char _letra){
	letra = _letra;
}
void Ficha::setValor(int _valor){
	valor = _valor;
}
void Ficha::Mostrar(){
	cout<<"\nLa letra es: "<<letra;
	cout<<"\nEl valor es: "<<valor;
}

class Scrabble{
private:
	string jugador;
	vector<int> valores;
	vector<char> letras;
public:
	Scrabble(){}
	~Scrabble(){}
	
	void setNombre(string);
	void generarAleatorio();
	void MostrarFichas();
	
};

void Scrabble::setNombre(string nombre){
	jugador = nombre;
}
void Scrabble::generarAleatorio(){
	
	
	for(int i=0; i<7; i++){
		valores.push_back(rand_numeros(gen));
		letras.push_back(char(rand_letras(gen)));
	}
	
}
void Scrabble::MostrarFichas(){
	cout<<"\nEl jugador: "<<jugador;
	
	for(int i=0; i<7; i++){
		cout<<"\nValor: "<<valores[i]<<" ";
		cout<<"Letra: "<<letras[i];
	}
}

int main(int argc, char *argv[]) {
	
	Scrabble p1;
	
	p1.setNombre("SAUL");
	p1.generarAleatorio();
	p1.MostrarFichas();
	
	cout<<endl;
	
	Scrabble p2;
	
	p2.setNombre("PEDRO");
	p2.generarAleatorio();
	p2.MostrarFichas();
	
	cout<<endl;
	
	Scrabble p3;
	
	p3.setNombre("JULIO");
	p3.generarAleatorio();
	p3.MostrarFichas();
	
	
	
	
	return 0;
}

