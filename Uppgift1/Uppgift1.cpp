#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  
  int i;
  int j;
  int total;
  
  cout << "Distans i mil f�rra �ret: ";
  cin >> i;
  cout << "Du har �kt " << i << " mil det h�r �ret" << endl;
  
  cout << "Distans i mil det h�r �ret: ";
  cin >> j;
  cout << "Du har �kt " << j << " mil det h�r �ret" << endl;
  
  total = i + j;
  
  cout << "Du har �kt totalt " << total << " mil";
  
  return 0;
}

