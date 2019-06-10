#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned int a, i, k = 0;
    char s = 'o';
    while (s != 'x')
    {
        cout << "Input value: ";
        cin >> a;

        for (i = 2; i < a / 2; i++)
        {
            if (a%i == 0)
            {
                k = 1;
                cout << "The number is not prime." << endl << endl;
                break;
            }
        }

        if (k == 0)
        {
            cout << "The number is prime." << endl << endl;
        }

        cout << "If you wish to imput another number, input any character other than x." << endl << "If you wish to end, input x.";
        cin >> s;
        cout << endl << endl;
    }

    return 0;
}

