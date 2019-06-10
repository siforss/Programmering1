#include <iostream>

using namespace std;

void print(int n, int v[100])
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl << endl;
}

int main()
{
    int t1, t2, T, c = 2, F[100], n = 2;
    t1 = 1;
    t2 = 1;
    F[0] = t1;
    F[1] = t2;
    while (c < 20)
    {
        T = t1 + t2;
        t1 = t2;
        t2 = T;
        c++;
        F[n] = T;
        n++;
    }

    print(n, F);

    return 0;
}
