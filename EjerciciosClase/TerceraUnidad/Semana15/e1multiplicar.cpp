#include <iostream>

using namespace std;

template<size_t X,size_t Y,size_t Z>

void multiplicarMatriz(int (&M)[X][Y][Z], int n){
	for (size_t i=0; i<X; i++){
		
		for (size_t j=0; j<Y; j++){
			
			for (size_t k=0; k<Z; k++){
				
				M[i][j][k] *= n;
			}   
		}
	}
}

template<size_t X,size_t Y,size_t Z> 

void mostrarMatriz(int (&M)[X][Y][Z]){
	
	for (size_t i=0; i<X; i++){
		
		for (size_t j=0; j<Y; j++){
			
			for (size_t k=0; k<Z; k++){
				
				cout<<M[i][j][k]<<"  ";
			}
			
		}
		cout<<endl;
	}
	
}

int main(int argc, char *argv[]) {
	
	int x[3][4][2] = {{{1,2},{4,5},{7,8},{1,2}},
					{{10,11},{13,14},{16,17},{1,2}},
					{{19,20},{22,23},{25,26},{1,2}}};
	
	
	cout<<"-------MATRIZ------"<<endl;
	mostrarMatriz(x);
	cout<<endl;
	
	multiplicarMatriz(x,2);
	
	cout<<"\n-------MATRIZ(Multiplicada)------"<<endl;
	mostrarMatriz(x);
	
	return 0;
}

