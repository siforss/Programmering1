#include <iostream>

using namespace std;

int main() {

    int tal, multi, total;

    cout << "V�lj ett tal: ";
    cin >> tal;

    while (multi <= 11) {
    	multi = multi + 1;
        total = tal * multi;
        cout << tal << " * " << multi << " = " << total << endl;
    } 

    return 0;
}
