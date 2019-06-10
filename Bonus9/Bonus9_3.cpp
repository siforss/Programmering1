#include <iostream>

using namespace std;
 
int main() {
    int central_digit, spaces;
 
    for(int i = 1; i <= 18; i++) {
        
		if (i <= 9) central_digit = i;
        
		else central_digit = 18 - i;
        
		spaces = 18 - central_digit;
        
		for (int i = 1; i <= spaces; i++) cout << " ";
        
		for (int i = 1; i < central_digit; i++) cout << i;
        
		for (int i = central_digit; i >= 1; i--) cout << i;
        
		cout << endl;
		
    }
    
	return 0 ;
}
