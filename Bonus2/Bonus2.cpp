#include <iostream>

using namespace std;

int main() {

	int i, j;
	
	cout << "---x---Heltals Medelvärde---x---" << endl;
	
	cout << "Number 1: ";
  	cin >> i;
  
  	cout << "NUmber 2: ";
  	cin >> j;
  	
  	i = i + j;
  	
  	cout << "Number 3: ";
  	cin >> j;
 	
 	i = i + j;
  
  	cout << "Number 4: ";
  	cin >> j;
  	
  	i = i + j;
  	
	cout << "Number 5: ";
  	cin >> j;
  
    i = i + j;
    j = i / 5;
    
  	cout << "Medel: " << j << endl;
  	
  	cout << "---x----x----x-----x----x----x---";
 
	return 0; 
}
