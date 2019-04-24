#include <iostream>

using namespace std;

int main() {
	int array[10];
	
	for(int i = 9; i >= 0; i--) {
		cout << "Skriv in " << i + 1 << " mer nummer: ";
		cin >> array[i];
	}
	
	for(int i = 9; i >= 0; i--) {
		cout << array[i] << ", ";
	}
	
	return 0;
}
