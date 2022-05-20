#include <iostream>
#include <vector>
using namespace std;


bool areFactors(int n, int A[100]){
	
	vector<int> Divisores;
	
	for(int i=1; i <= n; i++){
		
		if( (n % i) == 0){
			
			Divisores.push_back(i);
			
		}
		
		
	}
	
	for(int i = 0; i<Divisores.size(); i++){
		
		if(A[i] != Divisores[i]){
			return false;
			break;
			
		}
		
	}
	
	return true;
	
	
	
}

int main(int argc, char *argv[]) {
	
	int A[100]={1,2,5,10};

	
	
	if(areFactors(10,A)){
		cout<<"\nTodos los valores son factores de "<<10;
	}
	else{
		cout<<"\nNo todos son factores de "<<10;
	}
	

	
	
	
	
	
	return 0;
}

