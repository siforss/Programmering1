#include <iostream>

using namespace std;

int main() {

int x, z;

	cout << "Årsmodell? ";
	cin >> x;
	cout << "Nuvarande år? ";
	cin >> x;
	
	x = z - x;
	
	if (x < 5)
		cout << "Välj en Helförsäkring";
		
	else if (x >= 6)
		cout << "Välj en Halvförsäkring";
 
	return 0; 
}
