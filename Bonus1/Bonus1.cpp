#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int i, j;
 
    cout << "Katet 1 i cm: ";
  	cin >> i;
 	cout << "Katet 1: " << i << " cm" << endl;
  
  	cout << "Katet 2 i cm: ";
  	cin >> j;
  	cout << "Katet 2: " << j << " cm" << endl;
  	
  	i = i * i;
  	j = j * j;
  	
    i = sqrt(i + j);
  	cout << "Hypotenusan: " << i << " cm";
  
    
	return 0; 
}
