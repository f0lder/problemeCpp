#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    cout << "a)\n";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "b)\n";
    for (i = n; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "c)\n";
    int k;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        for (j = 1, k = 2 * i - 1; j <= 2 * i - 1; j++, k--)
        {
            if (j <= k)
            {
                cout << j<< " ";
            }
            else
            {
                cout << k<< " ";
            }
        }
        cout << endl;
    }

    return 0;
}