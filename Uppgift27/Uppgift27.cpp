#include <iostream>

using namespace std;

int main() {
	int restart_bool = 1;
	
	while(restart_bool == true) {
	string user_input, restart;;
	float a, b;
	int wrong = true;
	
	cout << "Skriv in Addition, Subtraktion, Multiplikation eller Division (CASE SENSITIVE)" << endl;
	cin >> user_input;
	
	cout << "Skriv in A och B" << endl;
	cin >> a;
	cin >> b;
	
	while(wrong == true) {
		if(user_input == "Addition") {
			cout << a + b << endl;
			wrong = false;
		} 
	
		else if(user_input == "Subtraktion") {
			cout << a - b << endl;
			wrong = false;
		} 
	
		else if(user_input == "Multiplikation") {
			cout << a * b << endl;
			wrong = false;
		} 
	
		else if(user_input == "Division") {
			cout << a / b << endl;
			wrong = false;
		}	 
	
		else {
			cout << "Skriv med stor bokstav i början!" << endl;
			cout << "Addition, Subtraktion, Multiplikation eller Division" << endl;
			wrong = true;
			cin >> user_input;
		}
	}
	
	cout << "Vill du kora igen?" << endl;
	cin >> restart;
	
	if(restart == "Ja") {
		restart_bool = true;
	} 
	
	else if(restart == "Nej") {
		cout << "Hejda";
		restart_bool = false;
	}	
	
	}
	return 0;
}
