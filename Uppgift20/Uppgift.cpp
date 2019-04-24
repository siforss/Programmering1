#include <iostream>

using namespace std;

int main() {
	
	int f;
	bool run = true;
	
	while (run == true) {

		cout << "Vill du avsluta programmet? ( skriv 0 för att avsluta ) ";
		
		cin >> f;
		
		if (f == 0) {
			return 0;
		}				
	}
}
