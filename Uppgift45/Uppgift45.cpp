#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int dice_throw[5], number;
	string decision;
	
	for(int i = 0; i < 5; i++) {
		dice_throw[i] = rand() % 6 + 1;	
	}
	
	for(int i = 0; i < 5; i++) {
		cout << dice_throw[i];
		cout << endl;
	}
	
	while(decision != "Yes" and decision != "No") {
		cout << "Do you want to throw the dice? (Yes or No) ";
		cin >> decision;
	}
	
	if(decision == "Yes") {
		while(number < 1 or number > 5) {
			cout << "Which dice? (Between 1-5) ";
			cin >> number;
		}
		number--;
		dice_throw[number] = rand() % 6 + 1;
		
		for(int i = 0; i < 5; i++) {
			cout << dice_throw[i];
			cout << endl;
		}
	}
	
	return 0;
}
