#include <iostream>

using namespace std;

int main() {
	
  int a, b;
 
 	cout << "Type a number between 0 - 100: " << endl;
    cin >> a;
    cout << "Guess a number between 0 - 100: " << endl;
    cin >> b;
    
    if (a == b)
    {
      cout << "CONGRATULATIONS, YOU'VE WON!" << endl;
    }
    
    else if ((b = a >- 10 ) or (b = a >+ 10))
    {
      cout << "Close but no cigar!" << endl;
	}
    
    else if ((a >= 100) or (a <= 0))
    {
      cout << "ERROR: Number needs to be between 0 and 100" << endl;
	}
    
    else
    {
      cout << "Not even close!" << endl;
    }
    
  return 0; 
}
