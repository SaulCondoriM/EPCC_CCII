#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	
	double Celsius, Fahrenheit;
	
	cout<<"Ingrese la temperatura en Celsius: "; cin>>Celsius;
	
	Fahrenheit = (Celsius * 9/5) + 32;
	
	cout<<fixed<<setprecision(1)<<Celsius<<" C = "<<Fahrenheit<<" F";
	
	return 0;
}

