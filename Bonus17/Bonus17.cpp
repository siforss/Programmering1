#include <iostream>
#include <math.h>

using namespace std;

katetfunktion(int hypo,int katet) {
	
	float ans;
	
	ans = sqrt( (hypo * hypo) - (katet * katet) );
	
	return ans;
	
}

hypofunktion(int katet1, int katet2) {
	
	float ans;
	
	ans = sqrt( (katet1 * katet1) + (katet2 * katet2) );
	
	return ans;
	
}

int main(int argc, char** argv) {
	
	string svar;
	
	float ans;
	
	int hypotenusa, katet1, katet2;
	
	cout << "Vill du r�kna ut en Katet eller Hypotenusan? (Svara Katet eller Hypotenusa)" << endl;
	
	cin >> svar;

	if (svar == "Katet") {
		
		cout << "Skriv in hypotenusans l�ngd" << endl;
		
		cin >> hypotenusa;
		
		cout << "Skriv in katetens l�ngd" << endl;
		
		cin >> katet1;
		
		ans = katetfunktion(hypotenusa, katet1);
		
		cout <<"Den ok�nda katetens l�ngd �r" << ans;
		
	}

	else {
		
		cout << "Skriv in l�ngden f�r katet 1" << endl;
		
		cin >> katet1;
		
		cout << "Skriv in l�ngden f�r katet 2" << endl;
		
		cin >> katet2;
		
		ans = hypofunktion(katet1, katet2);
		
		cout <<"Hypotenusans l�ngd �r" << ans;
		
	}

	return 0;
}
