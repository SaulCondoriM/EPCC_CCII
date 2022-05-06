#include <iostream>
#include <random>

using namespace std;

int main(int argc, char *argv[]) {
	
	int num, randomNum, diferencia;
	
	cout<<"Estoy pensando en un numero entre 1 y 100"<<endl;
	cout<<"¿Puedes adivianar cual es?";
	cout<<"\nEscriba un numero: "; cin>>num;
	while(num<1 || num>100){
		cout<<"\nEscriba un numero: "; cin>>num;
	}
	
	cout<<"\nPusiste: "<<num;
	
	random_device rd;
	
	default_random_engine eng(rd());
	
	uniform_int_distribution<int> distr(1,100);
	
	randomNum = distr(eng);
	
	cout<<"\nEl numero en el que estaba pensando es: "<<randomNum;
	
	if(randomNum > num){
		diferencia = randomNum - num;
		cout<<"\nLa diferencia es de :"<<diferencia;
	}
	else if(randomNum < num){
		diferencia = num - randomNum;
		cout<<"\nLa diferencia es de :"<<diferencia;
	}
	else{
		cout<<"\nCORRECTO, PENSASTE EN EL MISMO NUMERO";
	}
	
	
	
	
	
	
	return 0;
}

