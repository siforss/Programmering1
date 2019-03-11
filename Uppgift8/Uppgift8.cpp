#include <iostream>

using namespace std;

int main() {

int x, z;
bool interman;

	cout << "Årsmodell? ";
	cin >> x;
	cout << "Nuvarande år? ";
	cin >> z;
	
	x = z - x;
	
	if (x >= 25)
		interman = true;
		
	else
		interman = false;
	
	if (x < 5)
		cout << "Välj en Halvförsäkring";
		
	else if ((x >= 5) and (interman = false))
		cout << "Välj en Helförsäkring";
		
	else if ((x >= 25) and (interman = true))
		cout << "Välj en Veteranbilsförsäkrning";
 
					
	return 0;
}
