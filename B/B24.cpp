#include <iostream>
#include "functii.h"
using namespace std;

void citesteLayer(int **a, int n, int m, int l)
{
    cout << endl;
    // pentru l = 0 citeste marginea matricii
    int i, j;
    for (i = 0; i < m; i++) // citim linia de sus
    {
        cout << a[i][0] << " ";
    }
    for (i = 0; i < n; i++) // citim col din dreapta
    {
        cout << a[n][i] << " ";
    }
    for (i = n - 1; i > 0; i--) // citim linia de jos de la dr la st
    {
        cout << a[n][i] << " ";
    }
    for (i = m - 1; i > 0; i--) //citim prima coloana de jos in sus
    {
        cout << a[0][i] << " ";
    }
}

int main()
{
    int n, m, i;
    cout << "Nr de randuri: ";
    cin >> n;

    cout << "Nr de coloane: ";
    cin >> m;

    int **a;

    alocaMatrice(a, n, m);
    citire(a, n, m);
    afis(a, n, m);

    citesteLayer(a,n,m,1);

    return 0;
}