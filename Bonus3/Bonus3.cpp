#include <iostream>

using namespace std;

int main() {

	int minuter1, minuter2, timmar1, timmar2, sekunder1, sekunder2, summas, summam, summat;

    cout << "Antal timmar lopp 1?" << endl;
    cin >> timmar1;
    cout << "Antal minuter lopp 1?" << endl;
    cin >> minuter1;
    cout << "Antal sekunder lopp 1?" << endl;
    cin >> sekunder1;
    cout << "Antal timmar lopp 2" << endl;
    cin >> timmar2;
    cout << "Antal minuter lopp 2?" << endl;
    cin >> minuter2;
    cout << "Antal sekunder lopp 2?" << endl;
    cin >> sekunder2;
    
    summas = sekunder1 + sekunder2;
    summam = minuter1 + minuter2;
    summat = timmar1 + timmar2;
    
    if (summas >= 59)
    {
    	summas = summas - 60;
    	summam = summam + 1;
    }
    
    if (summam >= 59)
    {
    	summam = summam - 60;
    	summat = summat + 1;
    }
    
    cout << "Lopp 1: " << endl << summat << " : " << summam << " : " << summas << endl;
 
    
	return 0; 
}
