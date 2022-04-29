#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Declaramos datos
	int numeros[100];
	int n;
	//Pedimos hasta que tabla desea ver
	cout<<"\nNumero? "; cin>>n;
	//Llenamos nuestro arreglo "numeros"
	for(int i=0; i<n; i++){
		numeros[i]=i+1;
	}
	
	cout<<"   *|";
	
	for(int i=0; i<n; i++){
		cout<<"\t"<<numeros[i];
	}
	cout<<"\n----+";
	for(int i=0; i<n; i++){
		cout<<"--------";
	}
	for(int i=0; i<n; i++){
		cout<<"\n   "<<numeros[i]<<"|";
		for(int j=0; j<n; j++){
			cout<<"\t"<<numeros[i]*(j+1);
		}
		
	}
	
	return 0;
}

