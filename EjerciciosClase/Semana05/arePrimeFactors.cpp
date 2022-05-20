#include <iostream>
#include <vector>
using namespace std;

bool esPrimo(int numero) {
	
	if (numero == 0 || numero == 1 || numero == 4) return false;
	for (int x = 2; x < numero / 2; x++) {
		if (numero % x == 0) return false;
	}
	
	return true;
}

bool arePrimeFactors(int n, vector<int> A){
	
	int producto = 1;
	
	for(int i=0; i<A.size(); i++){
		producto *= A[i];
	}
	
	
	for(int i=0; i<A.size(); i++){
		if(esPrimo(A[i]) != true){
			return false;
			break;
		}
	}
	
	if(n == producto){
		return true;
	}
	
	return false;
	

	
}
	
int main(int argc, char *argv[]) {
	
	vector <int> B = {7,11,13};
	
	if(arePrimeFactors(1001, B)){
		cout<<"\nTodos los numeros del vector son primos y el producto coincide";
	}
	else{
		cout<<"\nNo todos los numeros del vector son primos o el procuto no coincide";
	}
	
	return 0;
}

