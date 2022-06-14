#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<class T>
class Intervalos{
private:
	vector<T> A;
	T inter;
public:
	Intervalos(vector <T> B);
	~Intervalos(){}
	void Histograma(T);
	void Mostrar();
	
};
template<class T>
Intervalos<T>::Intervalos(vector<T> B){
	for(int i=0; i<B.size(); i++){
		A.push_back(B[i]);
	}
}
template<class T>
void Intervalos<T>::Histograma(T _inter){
	vector<int> res;
	int c=0,v=0;
	sort(A.begin(),A.end());
	T inicial=A[0];
	T siguiente=inicial+inter;
	for(int k= 0; k< A.size(); k++){
		v=0;
		for(int i=0; i< A.size(); i++){
			
			if(inicial<=A[i] && A[i]<siguiente){
				c++;
			}
			v++;
		}
		if(c!=0){res.push_back(c);}
		c=0;
		inicial=siguiente;
		siguiente=inicial+inter;
	}
	for(int i = 0; i < res.size(); i++)
		cout << res.at(i) << " ";
}

template<class T>
void Intervalos<T>::Mostrar(){
	sort(A.begin(),A.end());
	for(int i = 0; i < A.size(); i++)
		cout << A.at(i) << " ";
}

int main(int argc, char *argv[]) {
	
	vector<int> P = {10,2,9,7,5,6,1,8,4,8};
	
	Intervalos<int> p1(P);
	cout<<"\nPrimera Lista"<<endl;
	for(int i=0; i<P.size(); i++){
		cout<<P[i]<<" ";
	}
	cout<<endl;
	P.Histograma(2);
	
	
	return 0;
}

