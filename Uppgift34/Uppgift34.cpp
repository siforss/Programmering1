#include <iostream>

using namespace std;

int IncreaseFunction(int number) {
	
	number = number + 2;
	
	return number;
}

int main(int argc, char** argv) {
	
	int number;
	
	cout << "Skriv in ett valfritt heltal!" <<endl;
	cin >> number;
	
	cout << IncreaseFunction(number);
	
	return 0;
}
