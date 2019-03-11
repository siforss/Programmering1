#include <iostream>

using namespace std;

int main() {
	
	int z;
	
	cout << "Antal rader: ";
	cin >> z; 
	
	for(int i = 0; i < z + 1; i++) {
		cout << "Baa";
		
		for(int j = 1; j < i + 1; j++) {
			cout << ", Baa";

		}
		
		cout << endl;
	}
	
	
	return 0; 
}
