#include <iostream>

using namespace std;

int main() {

int num[5], is_same;

for( int x = 0; x < 5; x++) {
	cout << "Skriv in ett tal: ";
	cin >> x[num];
}

for (int i = 0; i < 5; i++) {
	for(int test = 0; test < 5; test++)	{
		if(num[i] == num[test] and i != test) {
			is_same = true;
		} 
		else {
			is_same = false;
		}
		
		if(is_same == true){
			cout << num[i] << " is the same!" << endl;
		}
	}
}





	return 0;
}
