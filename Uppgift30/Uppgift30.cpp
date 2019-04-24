    
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	string namn;
	char endra = 'Z';
	
	cout << "Vad heter du? ";
	cin >> namn;
	
	namn[0] = endra;
	cout << "Nej, du heter " << namn;
	return 0;
}
