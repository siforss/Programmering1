#include <iostream>

using namespace std;

int main() {
	
	int rad, plats_set, antal_rader = 0;
	
	cout << "Skriv in vilken plats _ ska starta (Mellan 1-10): ";
	cin >> plats_set;
	
	while ((rad <= 10) and (antal_rader <= 6)) {
		rad++;
			
		if(rad == plats_set) {
			cout << "_";
		}
		
		else if(rad != plats_set) {		
			cout << "*";
		}
			
		if(rad == 10) {
			rad = rad - 10;
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
