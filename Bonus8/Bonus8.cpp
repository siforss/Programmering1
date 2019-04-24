#include <iostream>

using namespace std;

int main() {
	
	int k;
	
	for(int i = 0; i < 10; i++) {
		cout << "0 ";
		
		for(int j = 1; j < 10; j++) {
			cout << j << " ";
			i = 0;
			k++;
			
			if(k == 90) {
				return 0;
			}
		}
		cout << endl;	
	}
}
