#include <iostream>

using namespace std;

int main() {
	
	int add;
	bool increase = true;
	
	while (add <= 8) {
		
		cout << add << endl;
		add = add + 1;
		
		if (add >= 7) {
			increase = false;
			
			while (increase == false) {
				cout << add << endl;
				add = add - 1;
				
				if (add == -1) {
					return 0;
				}
			}
		}
	}
}
