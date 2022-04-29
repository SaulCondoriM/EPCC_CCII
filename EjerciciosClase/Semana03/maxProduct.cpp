/*
Producto máximo de dos números en una secuencia
• Dada una secuencia de n números no negativos y mayores que cero. 
• El objetivo es encontrar el mayor número que se pueda obtener multiplicando dos números de esta secuencia. 
• Usando un bucle for
*/



#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Declaramos los datos
	int numeros[100];
	int n,aux;
	//Pedimos cantidad de numeros
	cout<<"Cuantos numeros desea ingresar? "; cin>>n;
	//Comprobar que es mayor que es mayor que 0 y que por lo menos son 2 numeros para poder multiplicar
	while(n<=1){
		cout<<"\nIngrese un numero mayor a 1";
		cout<<"\nCuantos numeros desea ingresar? "; cin>>n;
	}
	
	//Ingresamos
	for(int i=0; i<n; i++){
		cout<<"\nIngrese: ";cin>>numeros[i];
		//Comprobamos que los numeros son positivos
		while(numeros[i]<0){
			cout<<"\nIngrese un numero mayor a 0";
			cout<<"\nIngrese: ";cin>>numeros[i];
		}
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
	//Multiplicamos los dos ultimos elementos del arreglo
	cout<<"\nEl mayor producto es: "<<numeros[n-2]*numeros[n-1];
	
	return 0;
}

