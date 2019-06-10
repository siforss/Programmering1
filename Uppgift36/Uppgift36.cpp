#include <iostream>

using namespace std;

string ABBAFunction(string forstaordet, string andraordet, string ABBA) {
	
	ABBA = forstaordet + andraordet + andraordet + forstaordet;
	
	return ABBA;
}


int main(int argc, char** argv) {
	
	string forstaordet, andraordet, ABBA;
	
	cout << "Skriv ett valfritt ord!" << endl;
	cin >> forstaordet;
	cout << "Skriv ett valfritt ord!" << endl;
	cin >> andraordet;
	
	cout << ABBAFunction(forstaordet, andraordet, ABBA);
	
	return 0;
}
