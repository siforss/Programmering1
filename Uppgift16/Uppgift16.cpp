#include <iostream>

using namespace std;

int main() {

    int tal, hopp, sluttal;

    cout << "V�lj ett tal mellan 10-20" << endl;
    cin >> tal;

    while(!(tal >= 10 && tal <= 20)) {
        cout << "F�rs�k igen." << endl;
        cin >> tal;
    }

    while(tal >= 10 && tal <= 20) {

        cout << "V�lj hur stora hopp talen ska g�ra" << endl;
        cin >> hopp;

        cout << "V�lj vilket tal det ska sluta p�" << endl;
        cin >> sluttal;

        cout << "Resultat: " << endl;

        for(int i = tal; i >= sluttal; i = i - hopp) {
            cout << i << endl;
        }
    } 

    return 0;
}
