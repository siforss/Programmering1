#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int samma1, samma2, samma3;
	string ord;
	
	char hitta_M = 'M', hitta_A = 'A', hitta_T = 'T';
	char hitta_m = 'm', hitta_a = 'a', hitta_t = 't';
	
	cout << "Skriv ett ord: ";
	getline(cin, ord);
	
	int stop = 0;
	while (ord[stop] != '\0') {
      stop++;
	}
	
	for (int i = 0; i < stop; i++) {
		if (ord[i] == hitta_M or ord[i] == hitta_m) {
			samma1 = true;
		}
		if (ord[i] == hitta_A and samma1 == true or ord[i] == hitta_a and samma1 == true) {
			samma2 = true;
		}
		if (ord[i] == hitta_T and samma2 == true or ord[i] == hitta_t and samma2 == true) {
			samma3 = true;
		}
	}
	
	if (samma1 == true and samma2 == true and samma3 == true) {
		cout << "Mat!";
	}
	
	return 0;
}
