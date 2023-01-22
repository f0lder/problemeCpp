#include <iostream>
#include <fstream>
using namespace std;

ifstream f("intro.txt");

int main()
{
    int n, x,nrdiv = 0;

    f >> n; // citim nr de elemente

    for (int i = 1; i <= n; i++)
    {
        f >> x;
        cout << x << ": ";
        if (x < 0)
        {
            nrdiv = 0;
            for (int j = x; j <= -1; j++)
            {
                if (x % j == 0)
                {
                    nrdiv ++;
                }
                
            }
            cout << nrdiv << " ";
        }
    }
    return 0;
}