#include <iostream>
#include <sstream>

using namespace std;

template <typename S>

string to_string(S str){
	
	const char * c = str.c_str();
	
	return c;
	
}

int main(int argc, char *argv[]) {
	
	cout<<to_string(55)<<endl;
	
	cout<<to_string(156136874)<<endl;
	
	cout<<to_string(135.788)<<endl;
	
	cout<<to_string(-2.1)<<endl;
	
	
	
	return 0;
}

