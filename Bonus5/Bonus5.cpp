#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 
using namespace std; 
int main() { 
	int tot, bet, en = 0, fem = 0, tio = 0, femtio = 0, hundra = 0, femhundra = 0, tusen = 0, vexel, tjugo = 0; 
	
	cout << "Totala konstaden" << endl; cin >> tot; cout << "Totala betalningen" << endl; 
	cin >> bet; 
	
	vexel = bet - tot; 
	
	while (vexel >= 1000) { 
		vexel = vexel - 1000; tusen++; 
	} 
	
	while (vexel >= 500) { 
		vexel = vexel - 500; femhundra++; 
	}
	
	while (vexel >= 100) { 
		vexel = vexel - 100; hundra++; 
	}
	 
	while (vexel >= 50) { 
		vexel = vexel - 50; femtio++; 
	}
	 
	while (vexel >= 20) { 
		vexel = vexel - 20; tjugo++; 
	} 
	
	while (vexel >= 10) {
		vexel = vexel - 10; tio++; 
	} 
	
	while (vexel >= 5) { 
		vexel = vexel - 5; fem++; 
	} 
	
	while (vexel >= 1) { 
	vexel = vexel - 1; en++;
	} 
	
	if (tusen > 0) { 
		cout << tusen << "st tusenlappar" << endl; 
	}
	 
	if (hundra > 0) { 
		cout << hundra<< "st hundralappar" << endl; 
	}
	 
	if (femhundra > 0) { 
		cout << femhundra << "st femhundralappar" << endl; 
	} 
	
	if (femtio > 0) { 
		cout << femtio<< "st femtiolappar" << endl; 
	} 
	
	if (tjugo > 0) { 
		cout << tjugo << "st tjugolappar" << endl; 
	} 
	
	if (tio > 0) {
		cout << tio << "st tiokronor" << endl; 
	} 
	
	if (fem > 0) { 
		cout << fem << "st femkronor" << endl; 
	} 
	
	if (en > 0) { 
		cout << en << "st enkronor" << endl; 
	} 
	
	return 0; }
