#include <iostream>

using namespace std;

int main() {

int x, z;
bool interman;

	cout << "�rsmodell? ";
	cin >> x;
	cout << "Nuvarande �r? ";
	cin >> z;
	
	x = z - x;
	
	if (x >= 25)
		interman = true;
		
	else
		interman = false;
	
	if (x < 5)
		cout << "V�lj en Halvf�rs�kring";
		
	else if ((x >= 5) and (interman = false))
		cout << "V�lj en Helf�rs�kring";
		
	else if ((x >= 25) and (interman = true))
		cout << "V�lj en Veteranbilsf�rs�krning";
 
					
	return 0;
}
