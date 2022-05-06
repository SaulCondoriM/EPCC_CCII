#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int horas, minutos, segundos;
	
	cout<<"Ingresa el total de segundos: "; cin>>segundos;
	
	cout<<segundos<<" segundos = ";
	
	minutos = segundos / 60;
	segundos = segundos % 60;
	horas = minutos / 60;
	minutos = minutos % 60;
	
	cout<<horas<<" horas, "<<minutos<<" minutos, y "<<segundos<<" segundos";

	return 0;
}

