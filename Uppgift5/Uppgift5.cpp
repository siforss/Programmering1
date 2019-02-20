#include <iostream>

using namespace std;

int main() {
	
	int a;
 
 	cout << "Type a number between 100: " << endl;
    cin >> a;
    
    if (a == 54)
    {
      cout << "CONGRATULATIONS, YOU'VE WON!" << endl;
    }
    
    else if ((a >= 100) or (a <= 0))
    {
      cout << "ERROR: Number needs to be between 0 and 100" << endl;
	}
    
    else
    {
      cout << "UNLUCKY, GO NEXT" << endl;
    }
    
  return 0; 
}
