#include <iostream>
using namespace std ;
 
int main() {
    int central_digit, spaces, x;
 
    for(int i = 1; i <= 9; i++) {
        
		if (i <= 9) central_digit = i;
        
		else central_digit = 18 - i;
        
		spaces = 18 - central_digit;
        
		for (int i = 1; i <= spaces; i++) cout << " ";
        
		for (int i = 1; i < central_digit; i++) cout << i;
        
		for (int i = central_digit; i >= 1; i--) cout << i;
        
		cout << endl;
	
	}
	
	for(int i = 7; i >= 0; i--) {
	
		for(int j = 10 - x; j - x <= 10; j++) {
			
			j = j + 1;
			cout << " ";
		}
	
		cout << "       1";
		
		for(int j = 1; j < i + 1; j++) {
			cout << j + 1;
		}
		
		cout << endl;
		
		x = x + 1;
	}
	  
	return 0;
}
