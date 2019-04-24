#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	string ord;
	
	char endra = 'a', trasig = 'Z';
	
	cout << "Skriv ett ord ";
	cin >> ord;
	
	int sluta = 0; 
	while (ord[sluta] != '\0') {
      sluta++;
	}
	
	for(int i = 0; i < sluta; i++) {
		if(ord[i] == 'Z') {
			ord[i] = 'a';
		}
	}
	
	cout << ord << " :)";
	
	return 0;
}
