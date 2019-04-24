#include <iostream>

using namespace std;

int main() {
	
	for(int i = 0; i < 10; i++) {
		cout << "Baa, ";
		
		for(int j = 1; j < i + 1; j++) {
			cout << "Baa, ";

		}
		
		cout << endl;
	}
	
	
	return 0; 
}
