#include <iostream>

using namespace std;

struct position {
	
	int x;
	
	int y;
	
};


position kord (position pos) {
	
	cout << "Skriv in bollens X-kordinat (Mellan 0-10)" << endl;
	
	cin >> pos.x;

	cout << "Skriv in bollens Y-kordinat (Mellan 0-10)" << endl;
	
	cin >> pos.y;
	
	
	while (pos.x < 0 or pos.x > 10 or pos.y < 0 or pos.y > 10) {
		
		cout << "Skriv om X-kordinaten (Mellan 0-10)" << endl;
		
		cin >> pos.x;
		
		cout << "Skriv om Y-kordinaten (Mellan 0-10)" << endl;
		
		cin >> pos.y;
		
	}
		
	return pos;	
}

int plan(char boll, position pos){
	
	system("cls");
	
	for(int n = 0; n < pos.y; n++){
		
		cout << endl;
		
	}
	
	for(int i = 0; i < pos.x; i++){
		
		cout << " ";
		
	}
	
	cout << boll << endl;
	
}

int main() {
	
	char svar = 'J';
	
	char boll;
	
	position pos;
	
	while (svar == 'J') {
		
		boll = 'O';
		
		system("cls");

		pos = kord(pos);

		svar = plan(boll, pos);

		cout << "Vill du köra igen? (J för Ja)" << endl;
	
		cin >> svar;

	}
		
	return 0;
}
