#include <iostream>

using namespace std;

int main() {
	
	int x[10], anv, upp, storrean = 0, mindrean = 0, samma = 0, storre, mindre, lika;
	
	for(int i = 0; i < 10; i++) {
		
		cout << "Skriv in ett nummer: ";
		
		cin >> anv;
		
		x[i] = anv;
		
	}
	
	for(int n = 0; n < 10; n++) {
	
		upp = n + 1;
		
		if(x[upp] > x[n]) {
		
			storrean = true;
		
		} else if(x[upp] < x[n]) {
		
			mindrean = true;
		
		} else {
			samma = true;
		}
		
		if(storrean == true) {
			storre++;
	
		} else if(mindrean == true) {
			mindre++;
	
		} else {
			lika++;
		}
		
		storrean = false;
		mindrean = false;
		samma = false;
		}
	
	if(storre > 0) {
		storrean = true;
	}
	
	if(mindre > 0) {
		mindrean = true;
	}
	
	if(lika > 0) {
		samma = true;
	}
	
	
	if(storrean == true and mindrean == true) {
		
		cout << "Bara stigande och sänkande nummer";
		
	} else if(storrean == true and mindrean == false) {
		
		cout << "Bara stigande nummer";
		
	} else if(storrean == false and mindrean == true) {
		
		cout << "Bara minskande nummer";
		
	} else {
		
		cout << "Ingen utav det";
		
	}
	
	return 0;
}
