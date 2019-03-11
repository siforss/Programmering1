#include <iostream>

using namespace std;

int main() {
	
	int tal = 1234, tal2, re = 3;

	cout << "Type a four digit number: ";
 	cin >> tal2;
	
	while (tal != tal2)	{
		cout << "Wrong PIN code" << endl;
		re = re - 1;
		cout << "You have " << re << " tries left, try again" << endl;
		cout << "Type a four digit number: ";
 		cin >> tal2;
 		
		if (re == 1) {
			cout << "Your card is now locked";
			return 0;
		}else if ((tal2 <= 1000) or (tal2 >= 9999)) {
			cout << "ERROR: TYPE A 4 DIGIT NUMBER!: ";
			return 0;
		}	
 	}
		cout << "Right PIN code";
	 	
return 0; 
}
