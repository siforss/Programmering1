#include <iostream>

using namespace std;

int main() {
	
	int rad, plats_set, antal_rader = 0, rader_set, tecken_set;
	
	cout << "Skriv in vilken plats _ ska starta (Mellan 1-10): ";
	cin >> plats_set;
	cout << "Skriv in antal rader: ";
	cin >> rader_set;
	cout << "Skriv in antal tecken per rad: ";
	cin >> tecken_set;
	
	while ((rad <= tecken_set) and (antal_rader < rader_set)) {
		rad++;
			
		if(rad == plats_set) {
			cout << "_";
		}
		
		else if(rad != plats_set) {		
			cout << "*";
		}
			
		if(rad == tecken_set) {
			rad = rad - tecken_set;
			plats_set++;
			antal_rader++;
			cout << endl;
		}
		
		if(plats_set == 11) {
			plats_set = plats_set - 10;
		}
	}	
	
	return 0; 
}
