#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	
	srand(time(0));
	
	int kast[5], nummer;
	
	string val, om;
	
	for(int i = 0; i < 5; i++) {
		
		kast[i] = rand() % 6 + 1;	
		
	}
	
	for(int i = 0; i < 5; i++) {
		
		cout << kast[i];
		
		cout << endl;
		
	}
	
	while (val != "Ja" and val != "Nej") {
		
		cout << "Vill du kasta om en av tärningarna? (Ja eller Nej)" << endl;
		
		cin >> val;
	}
	
	if (val == "Ja") {
		
		cout << "Vilken av tärningarna vill du kasta om? (Nr. 1, 2, 3, 4 eller 5)";
		
		cin >> om;
		
		for(int i = 0; i < 5; i++) {
			
			if(om[i] == '1') {
				
				kast[0] = rand() % 6 + 1;
				
			}
			
			if(om[i] == '2') {
				
				kast[1] = rand() % 6 + 1;
				
			}
			
			if(om[i] == '3') {
				
				kast[2] = rand() % 6 + 1;
				
			}
			
			if(om[i] == '4') {
				
				kast[3] = rand() % 6 + 1;
				
			}
			
			if(om[i] == '5') {
				
				kast[4] = rand() % 6 + 1;
				
			}
			
		}
		
		
		for(int i = 0; i < 5; i++) {
			
			cout << kast[i];
			
			cout << endl;
			
		}
		
	}
	
	return 0;
}
