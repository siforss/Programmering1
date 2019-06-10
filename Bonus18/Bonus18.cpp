#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void read(int &n, int v[100])
{
    int i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
}

void search(int n, int a, int &k, int &mini, int &maxi)
{
    if (n == a)
    {
        cout << "The number was found :)" << endl;
        k = 1;
    }

    else
    {
        if (n > a)
        {
            cout << "The number is higher than " << a << " :) (and lower than " << maxi + 1 << ")" << endl << endl;
            mini = a + 1;
        }

        if (n < a)
        {
            cout << "The number is lower than " << a << " :) (and higher than " << mini - 1 << ")" << endl << endl;
            maxi = a - 1;
        }
    }
}

int main()
{
    int i, n, v[200], maxi, mini, a, b, k = 0, x, s = 0;

    for (i = 0; i < 100; i++)
    {
        v[i] = i + 1;
    }
    i--;

    srand(time(0));
    n = (rand() % 100) + 1;

    maxi = v[i];
    mini = v[0];
    while (k != 1)
    {
        cout << "Your turn!" << endl << "\Guess the number!// " << endl;
        cin >> a;
        cout << endl;

        search(n, a, k, mini, maxi);
        if (k == 1)
        {
            s = 1;
            break;
        }


        b = (rand() % 100) + 1;

        cout << endl << "My turn!" << endl << "\My guess is: " << b << "//" << endl << endl;

        search(n, b, k, mini, maxi);
        if (k == 1)
        {
            s = 2;
        }
        cout << endl;
    }

    if (s == 1)
    {
        cout << "Congrtaz! You guessed the number (" << n << ") and won!";
    }
    if (s == 2)
    {
        cout << "I guessed the number (" << n << ") and won! Gg, wp!";
    }

    cout << endl << endl;

    return 0;
}
