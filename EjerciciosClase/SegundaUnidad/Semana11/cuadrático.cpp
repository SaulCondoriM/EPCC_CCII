#include <iostream>
#include <cmath>
using namespace std;

class cuadratico{
private:
	
	float a, b, c;
	
public:
	
	cuadratico(){a = 0, b = 0, c = 0;}
	~cuadratico(){}
	cuadratico(const cuadratico& cop);
	cuadratico(float a, float b, float c);
	float Calcular(float x);
	
	
};

cuadratico::cuadratico(float _a, float _b, float _c){
	
	a = _a;
	b = _b;
	c = _c;
	
}

float cuadratico::Calcular(float x){
	float var;
	
	var = (a*pow(x,2))+(b*x)+c;
	
	return var;
}

cuadratico::cuadratico(const cuadratico& _cop){
	
	a = _cop.a;
	b = _cop.b;
	c = _cop.c;
	
}

int main(int argc, char *argv[]) {
	
	cuadratico A(5,4,9);
	
	cout<<A.Calcular(4)<<endl;
	
	return 0;
}

