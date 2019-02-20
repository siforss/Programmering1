#include <iostream>

using namespace std;

int main() {
	
	float a, b, c, x, z, total, y;
 
 	cout << "Choose between Addition, Substraction, Mutliplication and Division: " << endl;
 	cout << "1. Addition" << endl << "2. Substraction" << endl << "3. Multiplication" << endl << "4. Division" << endl << endl;
    
	
	cin >> a;
    
    if (a == 1)
    {
      cout << "You choosed Addition" << endl << endl;
      b = 1;
    }
    
    else if (a == 2)
    {
      cout << "You choosed Substraction" << endl << endl;
      b = 2;
	}
	
    else if (a == 3)
    {
      cout << "You choosed Multiplication" << endl << endl;
      b = 3;
	}
	
    else if (a == 4)
    {
      cout << "You choosed Division" << endl << endl;
      b = 4;
	}
    
    else
    {
      cout << "ERROR: Choose a valid number!" << endl;
    }
    
    cout << "Choose your first number: ";
    cin >> x;
    cout << "-x-----x-----x-----x-----x- " << endl;
    cout << "Choose your secound number: ";
    cin >> z;
    
    
    if (b == 1)
    {
      total = x + z;
      cout << x << " + " << z << " = " << total;
    }
    
    else if (b == 2)
    {
      total = x - z;
      cout << x << " - " << z << " = " << total;
	}
	
    else if (b == 3)
    {
      total = x * z;
      cout << x << " * " << z << " = " << total;
	}
	
    else if (b == 4)
    {
      total = x / z;
      cout << x << " / " << z << " = " << total;
	}
    
    else
    {
      cout << "ERROR: Choose a valid number!" << endl;
    }
    
  return 0; 
}
