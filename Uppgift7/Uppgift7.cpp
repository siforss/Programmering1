#include <iostream>

using namespace std;

int main() {

int x, z;

	cout << "�rsmodell? ";
	cin >> x;
	cout << "Nuvarande �r? ";
	cin >> x;
	
	x = z - x;
	
	if (x < 5)
		cout << "V�lj en Helf�rs�kring";
		
	else if (x >= 6)
		cout << "V�lj en Halvf�rs�kring";
 
	return 0; 
}
