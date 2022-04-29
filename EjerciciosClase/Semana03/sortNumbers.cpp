/*
Your job is to write a program that reads integers from
the standard input, sorts them into ascending order, and
then prints the sorted numbers, one per line.
*/



#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Declaramos los datos
	int numeros[100];
	int n,aux;
	//Pedimos cantidad de numeros
	cout<<"Cuantos numeros desea ingresar? "; cin>>n;
	//Comprobar que es mayor que es mayor que 0
	while(n<=0){
		cout<<"\nIngrese un numero mayor a 0";
		cout<<"\nCuantos numeros desea ingresar? "; cin>>n;
	}
	
	//Ingresamos
	for(int i=0; i<n; i++){
		cout<<"\nIngrese: ";cin>>numeros[i];
		
	}
	//Ordenamiento de menor a mayor por metodo burbuja
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(numeros[j]>numeros[j+1]){
				aux = numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}
	}
	cout<<"\nNumeros por Orden Ascendente: "<<endl;
	for(int i=0; i<n; i++){
		cout<<numeros[i]<<endl;
	}
	
	return 0;
}

