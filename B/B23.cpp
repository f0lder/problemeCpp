#include <iostream>
#include "functii.h"
using namespace std;

int main()
{
    int n, m, i, l;
    cout << "Nr de randuri: ";
    cin >> n;

    cout << "Nr de coloane: ";
    cin >> m;

    int **a;

    alocaMatrice(a, n, m);
    citire(a, n, m);
    afis(a, n, m);

    cout << "Linia de sters: ";
    cin >> l;
    while (l > n)
    {
        cout << "Linia de sters nu poate fi mai mare decat " << n;
        cout << "Linia de sters: ";
        cin >> l;
    }

    for (i = l - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    afis(a, n, m);
    return 0;
}