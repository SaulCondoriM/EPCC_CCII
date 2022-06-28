#include <iostream>
#include <stack>
using namespace std;

template <typename T>


class Pila{
private:
	stack<T> P;
	int tamanio;
public:
	Pila(){}
	Pila(int tamanio);
	~Pila(){}
	
	int top();
	void pop();
	void push(T valor);
	void clear();
	int size();
	bool full();
	bool empty();
};

template <typename T>

Pila<T>::Pila(int _tamanio){
	tamanio = _tamanio;
}
template <typename T>
int Pila<T>::top(){
	return P.top();
}

template <typename T>
void Pila<T> :: pop(){
	if(empty()){
		throw ("\nERROR -> La pila esta vacia");
	}
	else{
		int temp = P.top();
		P.pop();
	}
}
template <typename T>
void Pila<T>::push(T valor){
	if(full()){
		throw ("\nERROR -> La pila esta llena");
	}
	else{
		P.push(valor);
	}
}

template <typename T>
void Pila<T>::clear(){
	while(!empty()){
		P.pop();
	}
}
template <typename T>
int Pila<T>::size(){
	return P.size();
}
template <typename T>
bool Pila<T>::full(){
	if(P.size() >= tamanio){
		return true;
	}
	return false;
}
template <typename T>
bool Pila<T>::empty(){
	return P.empty();
}



int main(int argc, char *argv[]) {
	
	Pila<int> P(15);
	
	P.push(45);
	P.push(14);
	P.push(78);
	
	//Ultimo Elemento
	
	cout<<P.top()<<endl;
	
	//Eliminar el ultimo;
	P.pop();
	
	//Tamaño de la pila
	cout<<P.size()<<endl;;
	
	if(P.full()){
		cout<<"\nLa pila esta llena";
	}
	
	//Borramos la pila
	P.clear();
	
	if(P.empty()){
		cout<<"\nLa pila esta vacia";
	}
	
	return 0;
}

