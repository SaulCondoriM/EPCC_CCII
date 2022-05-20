#include <iostream>
#include <vector>
using namespace std;

void sieve(int n){
	
	vector<bool> vector(n,1);
	
	vector[0] = false;
	vector[1] = false;
	
	for(int i=2; i<n; i++){
		if(vector[i] == true){
			for(int j = 2 * i; j < n; j += i){
				vector[j] = false;
			}
		}
	}
	
	
	
	cout<<endl;
	
	for(int i=1; i<n; i++){
		cout<<vector[i]<<" ";
	}
}
	
	
	int main(int argc, char *argv[]) {
		
		
		sieve(30);
		
		
		return 0;
	}
	
	
