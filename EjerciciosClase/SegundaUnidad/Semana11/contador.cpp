#include <iostream>
using namespace std;

class Contador{
private:
	int cont;
	int val;
public:
	Contador(){}
	Contador(int cont);
	~Contador(){val--;}
	
	Contador& operator++();
	Contador operator++(int);
	
	int Valor();
	int numeroCont();
};

Contador::Contador(int _cont){
	cont = _cont;
	val++;
	
	
}

Contador Contador::operator++(int){
	int temp = this->cont;
	++* this;
	return temp;
}
Contador& Contador::operator++(){
	
	this->cont++;
	return *this;
}

int Contador::Valor(){
	return this->cont;
}
int Contador::numeroCont(){
	return this->val;
}



int main(int argc, char *argv[]) {
	
	Contador A(8);
	
	cout<<"\nCantidad de contadores: "<<A.numeroCont()<<endl;
	
	Contador B(7);
	A++;
	B++;
	cout<<"\nContador A: "<<A.Valor()<<endl;
	cout<<"\nContador B: "<<B.Valor()<<endl;
	
	
	
	
	return 0;
}

