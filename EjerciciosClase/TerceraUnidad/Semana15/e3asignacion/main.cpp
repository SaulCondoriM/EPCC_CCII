#include "LinkedList.h"

#include<iostream>


using namespace std;

int main (int argc, char *argv[]) {
	
	
	LinkedList* L1 = new LinkedList;
	LinkedList* L2 = new LinkedList;
	
	for (int i = 1; i <= 5; i++){
		L1->insert(i);
		
	}
	cout << "\n------LISTA 1------"<<endl;
	L1->Imprimir();
	
	cout<<endl;
	
	for (int i = 5; i <= 9; i++){
		L2->insert(i);
		
	}
	
	cout << "\n------LISTA 2------"<<endl;
	L2->Imprimir();
	
	cout<<endl;
	
	L1 = L2;
	
	cout<<endl;
	
	cout << "\n LISTA 1 = LISTA 2"<<endl;
	
	cout << "\n------LISTA 1------"<<endl;
	L1->Imprimir();
	cout << endl;
	
	cout << "\n------LISTA 2------"<<endl;
	L2->Imprimir();
	cout << endl;
	
	delete L1, L2;
	
	
	
	return 0;
}

