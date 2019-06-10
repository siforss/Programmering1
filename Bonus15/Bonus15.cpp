    #include <iostream>

using namespace std;

float FunctionFahToCel(float degrees);

float FunctionCelToFah(float degrees);

float FormelVal(char decision, float degrees);

int main(int argc, char** argv) {
	char decision;
	float degrees, celcius, fahrenheit;
	
	while(decision != 'C' and decision != 'F') {
	cout  << "Which of C or F do you know?: ";
	cin >> decision;
	}
	
	cout << "Input how many degrees the unit you know is: ";
	cin >> degrees;
	
	
	cout << FormelVal(decision, degrees);
	return 0;
}

float FormelVal(char decision, float degrees) {
	float result;
	
	if(decision == 'C')
	{
		float FunctionCelToFah(float degees);
	} else if(decision == 'F') {
		FunctionFahToCel(degrees);
	}
	
	if(decision == 'C')
	{
		result = FunctionCelToFah(degrees);
	} else if (decision == 'F') {
		result = FunctionFahToCel(degrees);
	}
	
	return result;
}

float FunctionCelToFah(float degrees) {	
	float celcius = degrees, fahrenheit;
	fahrenheit = celcius * 1.8 + 32;
	
	return fahrenheit;
}

float FunctionFahToCel(float degrees) {
	float fahrenheit = degrees, celcius;
	celcius = (fahrenheit - 32) * 0.5556;
	
	return celcius;
}
