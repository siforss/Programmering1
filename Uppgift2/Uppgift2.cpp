#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  
  int i;
  int j;
  int total;
  int bensin;
  
  cout << "Distans i mil f�rra �ret: ";
  cin >> i;
  cout << "Du har �kt " << i << " mil det h�r �ret" << endl;
  
  cout << "Distans i mil det h�r �ret: ";
  cin >> j;
  cout << "Du har �kt " << j << " mil det h�r �ret" << endl;
  
  total = i + j;
  
  bensin = total * 0.83;
  
  cout << "Du har �kt totalt " << total << " mil. " << "Vilket betyder att du har anv�nt " << bensin << "liter bensin" << endl;
  
  return 0;
}

