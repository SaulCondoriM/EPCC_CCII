#include <iostream>
using namespace std;

void letterHist(string a){
	
	int letras[255];
	
	
	for(int i = 0; i < 255; i++){
		letras[i] = 0;
	}
	
	for (int i = 0; i < a.length(); i++){
		if (a[i] != '\n'){
			letras[int(a[i])]++;
		}
	}
	
	
	for (int i = 0; i < 255; i++) {
		if (letras[i] != 0) {
			cout<<(char)(i) << ": " << letras[i] << " ";
			for (int j = 0; j < letras[i]; j++){
				cout << "*";
			}
			cout << endl;
		}
	}
	
}

int main(int argc, char *argv[]) {

	string a;
	
	cout<<"\nIngrese una palabra: "; cin>>a;
	
	letterHist(a);
	
	return 0;
}

