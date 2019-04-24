#include <iostream>

using namespace std;

int main() {
	
	int f;
	bool is_ten;
	
	cout << "Skriv in ett tal mellan 1 och 10: ";
	cin >> f;
	
	if (f == 10) {
		is_ten = true;
	}
	
	else {
		is_ten = false;
	}
	
	
	if (is_ten == true) {
		cout << "Grattis, du gissa rätt";
	}
		
	else if (is_ten == false) {
		cout << "Fel tal!";
	}
	
	
	return 0; 
}
