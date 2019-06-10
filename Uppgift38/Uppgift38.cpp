#include <iostream>

using namespace std;

float Calculator(float celciuss) {
	float fahrenheit, Nytemp;
	
	fahrenheit = 9 * (celciuss / 5) + 32;
	return fahrenheit;
}

float Temp() {
	
	float celcius, Fahrentemp;
	
	cout << "Input C to convert it to F: ";
	cin >> celcius;
	
	Fahrentemp = Calculator(celcius);
	
	cout << Fahrentemp;
}

int main() {

	Temp();

	return 0;
}
