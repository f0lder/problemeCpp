#include <iostream>
#include "functii.h"
using namespace std;

int main()
{
    int n, m, i;
    cout << "Nr de randuri: ";
    cin >> n;

    cout << "Nr de coloane: ";
    cin >> m;

    // alocam dinamic matricea
    int **a, **b, **c;

    alocaMatrice(a, n, m);
    citire(a, n, m);

    alocaMatrice(b, n, m);
    citire(b, n, m);

    alocaMatrice(c, n, m);
    fill0(c,n,m);

    int k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < m; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    afis(a,n,m);
    afis(b,n,m);
    afis(c, n, m);

    return 0;
}