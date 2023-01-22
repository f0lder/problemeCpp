#include <iostream>
using namespace std;
int main()
{
    int n, d = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            d++;
        }
    }
    if (d > 2)
    {
        cout << "Nr nu este prim";
    }
    else
    {
        cout << "nr este prim";
    }
    return 0;
}