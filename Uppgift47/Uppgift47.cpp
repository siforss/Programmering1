#include <iostream>

using namespace std;

struct boll {
	
	int radie;
	
	int vikt;
	
	string farg;
	
};

struct boll2 {
	
	int radie;
	
	int vikt;
	
	string farg;
	
};

int main() {
	
	boll ett;
	
	
	cout << "Skriv in bollens radie (M)" << endl;
	
	cin >> ett.radie;
	
	cout << "Skriv in bollens vikt (KG)" << endl;
	
	cin >> ett.vikt;
	
	cout << "Skriv in bollens färg" << endl;
	
	cin >> ett.farg;
	
	
	boll2 tva = { ett.radie*2, ett.vikt*8, ett.farg };
	
	
	cout << endl << "Radien, vikten och färgen på den första bollen" << endl;
	
	cout << ett.radie << " meter" << endl;
	
	cout << ett.vikt << " KG" << endl;
	
	cout << ett.farg << endl;
	
	
	cout << endl << "Radien, vikten och färgen på den andra bollen" << endl;
	
	cout << tva.radie << " meter" << endl;
	
	cout << tva.vikt << " KG" << endl;
	
	cout << tva.farg << endl;
	
	
	return 0;
}
