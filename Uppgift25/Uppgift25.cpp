#include <iostream>

using namespace std;

int main() {


	int x[7];
	int a;

	for(int y = 0; y < 7; y++ ) {
		cout << "Write 7 numbers: ";
		cin >> x[y];
	}

	for(int e = 0; e < 7; e++) {
		a = a + x[e];
	}

	if( a > 50) {
		cout << "Sum is over 50";
	}
	else {
		cout << "Sum is under 50";
	}
	
	return 0;
}
