#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  
  int i;
  int j;
  int total;
  
  cout << "Distans i mil förra året: ";
  cin >> i;
  cout << "Du har åkt " << i << " mil det här året" << endl;
  
  cout << "Distans i mil det här året: ";
  cin >> j;
  cout << "Du har åkt " << j << " mil det här året" << endl;
  
  total = i + j;
  
  cout << "Du har åkt totalt " << total << " mil";
  
  return 0;
}

