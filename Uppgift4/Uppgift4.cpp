#include <iostream>

using namespace std;

int main() {
  
  int a, b, c;
  
  cout << "------------- " << endl;
  cout << "Type in your numbers: " << endl;
  cout << "First Number: ";
  cin >> a;
  cout << "Second Number: ";
  cin >> b;
  cout << "------------- " << endl << endl;
  
  cout << "------------- " << endl;
  cout << "Number list: " << endl;
  cout << "Number 1: " << a << endl;
  cout << "Number 2: " << b << endl;
  cout << "------------- " << endl << endl;
  
c = b;

b = a;

a = c;
  
  cout << "------------- " << endl;
  cout << "Your numbers has now changed places: " << endl;
  cout << "Number 1: " << a << endl;
  cout << "Number 2: " << b << endl;
  cout << "------------- " << endl;
  

  return 0;
}
