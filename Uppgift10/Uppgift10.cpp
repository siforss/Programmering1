#include <iostream>

using namespace std;

int main() {

    int x, y, z;
    
    cout << "Type in the first number: ";
    cin >> x;
    cout << "Type in the second number: ";
    cin >> y;
    cout << "Type in the third number: ";
    cin >> z;
    
    if ((x >= y) and (x >= z))
		cout << x << " is the biggest number.";
		
	else if ((y >= x) and (y >= z))
		cout << y << " is the biggest number.";
	
	else
    	cout << z << " is the biggest number.";
 
	return 0; 
}
