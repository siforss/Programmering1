#include <iostream>

using namespace std;

int main() {
	
	int tal1, tal2;
	
	cout << "Skriv in ett tal: ";
 	cin >> tal1;
	
	tal2 = tal1 - 1;
	
	for(int i = tal2; i > 0; i--) {
		cout << i << endl;
	}
	
	return 0; 
}
