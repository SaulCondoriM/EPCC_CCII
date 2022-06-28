#include <iostream>
#include <vector>
using namespace std;

template<typename T>

T suma_Rango(vector<T> A, int inicio, int final, T val = 0){
	
	T sumaTotal = A[inicio] + val;
	
	for(int i = inicio + 1; i <= final; i++){
		sumaTotal += A[i];
	}
	
	return sumaTotal;
	
}

int main(int argc, char *argv[]) {
	

	
	
	vector<int> A = {1,2,3,4,5,6,7,8,9,10};
	
	cout<<"\nSuma 3-6: "<<suma_Rango(A,3,6);
	cout<<"\nSuma 2-7, con valor 8: "<<suma_Rango(A,2,7,8);
	
	
	return 0;
}

