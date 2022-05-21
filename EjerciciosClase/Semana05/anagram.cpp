#include <iostream>
#include <algorithm>
using namespace std;

bool Anagram(string a, string b){
	
	//Convertirmos los dos string a minuscula
	for(int i=0; i < a.length(); i++){
		a[i] = tolower(a[i]);
	}
	
	for(int i=0; i < b.length(); i++){
		b[i] = tolower(b[i]);
	}
	
	
	if(a.length() != b.length()){
		return false;
	}
	//ordenamos
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	for(int i=0; i < a.length(); i++){
		if(a[i] != b[i]){
			return false;
		}
	}
	
	return true;
	
}
	


int main(int argc, char *argv[]) {
	
	if(Anagram("stop", "pots")){
		cout<<"\nSon anagramas";
	}
	else{
		cout<<"\nNo son anagramas";
	}
	
	return 0;
}

