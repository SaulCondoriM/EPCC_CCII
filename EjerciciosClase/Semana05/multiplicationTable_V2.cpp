#include <iostream>
using namespace std;

void multiplicationTable(int n){
	int numeros[100];
	
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
}

int main(int argc, char *argv[]) {
	
	int n;
	
	cout<<"\nIngrese numero: "; cin>>n;
	
	multiplicationTable(n);
	
	
	return 0;
}
