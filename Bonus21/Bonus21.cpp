#include <iostream>

using namespace std;

int multiplicerare(int nummer) {

int summa;

	if(nummer == 1) {
	 summa = 1;
	
	} else {
		summa = nummer * multiplicerare(nummer-1);
	}
	
	return summa;
}


int main(int argc, char** argv) {

	int nummer;
	
	cout << "Skriv ett nummer" <<endl;
	
	cin >> nummer;
	
	cout << multiplicerare(nummer);
	
	return 0;
}
