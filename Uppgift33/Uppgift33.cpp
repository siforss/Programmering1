#include <iostream>

using namespace std;

void IncreaseFunction(int number) {
	
	number = number + 2;
	
	cout << number;
}

int main(int argc, char** argv) {
	
	int number;
	
	cout << "Skriv in ett valfritt heltal!" << endl;
	cin >> number;
	
	IncreaseFunction(number);
	
	return 0;
}
