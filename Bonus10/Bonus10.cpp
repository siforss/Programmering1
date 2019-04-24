#include <iostream>

using namespace std;

int main()
{
    int t1, t2, T, k = 2, s = 0;

    t1 = 1;
    t2 = 1;

    cout << t1 << endl << t2 << endl;

    while (k <= 20) {
        T = t1 + t2;
        t1 = t2;
        t2 = T; 
        k++; 
        cout << T << endl;
        s = s + T + 2;
    }

    cout << "Summan är " << s;

	return 0;
}
