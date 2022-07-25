#include <iostream>
using namespace std;

float sumafi(float a, int b){
	return a+b;
}
double restalf(float a, double b){
	return a-b;
}
long multiplicaid(int a, long b){
	return a*b;
}
	
template<typename T, typename F, typename G>
T operaciones(T(*op)(F,G),F x, G z){
	return op(x,z);
}
	

int main(int argc, char *argv[]) {
	
	cout<<"\nSuma"<<endl;
	cout<<operaciones(sumafi, 8.1f, 9)<<endl;
	cout<<operaciones(sumafi, 1.8f, 2)<<endl;
	
	cout<<"\nResta"<<endl;
	cout<<operaciones(restalf, 20.1f, 15.145)<<endl;
	cout<<operaciones(restalf, 47.9f, 34.128)<<endl;
	
	cout<<"\nMultiplicacion"<<endl;
	cout<<operaciones(multiplicaid, 26, 1L)<<endl;
	cout<<operaciones(multiplicaid, 3, 15L)<<endl;
	
	
	return 0;
}

