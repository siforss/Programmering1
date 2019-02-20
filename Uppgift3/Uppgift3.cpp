#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  
  int i;
  int ikg;
  int j;
  int jkg;
  
  cout << "Antal Bananer: ";
  cin >> i;
  
  if (i == 1)
  {
  	cout << "Du har lagt till " << i << " Banan i kundvagnen." << endl;
  }
  
  else if (i == 0)
  {
  	cout << "Du har inte lagt till några bananer i kundvagnen" << endl;
  } 
    
  else if (i <= -1)
  {
  	cout << "ERROR: Skriv ett positivt antal" << endl;
  	cout << "(0 Bananer har lagts till)" << endl;
  	i = 0;
  } 
  
  else
  {
    cout << "Du har lagt till " << i << " stycken Bananer i kundvagnen." << endl;
  }
  
  
  cout << "Antal Vattenmeloner: ";
  cin >> j;
  
  if (j == 1)
  {
  	cout << "Du har lagt till " << j << " Vattenmelon i kundvagnen." << endl;
  }
  
  else if (j == 0)
  {
  	cout << "Du har inte lagt till några meloner i kundvagnen" << endl;
  } 
    
  else if (j <= -1)
  {
  	cout << "ERROR: Skriv ett positivt antal" << endl;
  	cout << "(0 Vattenmeloner har lagts till)" << endl;
  	j = 0;
  } 
  
  else
  {
    cout << "Du har lagt till " << j << " stycken Vattenmeloner i kundvagnen." << endl << endl;
  }
  
  ikg = i * 0.15 * 30;

  jkg = j * 3 * 20;
  
  // Pris = Antal x Vikt/Styck x Kilopris
  
  cout << "Varor och pris: " << endl << endl << i << "st Bananer. " << "Pris: " << ikg << "kr" << endl << endl << j <<"st Meloner. " << "Pris: " << jkg << "kr" << endl;
  
  return 0;
}
