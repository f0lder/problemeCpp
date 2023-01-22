#include <iostream>
using namespace std;
void alocaMatrice(int **&a, int n, int m)
{
    a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int(m);
    }
}
void citire(int **&a, int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << "[" << i << "][" << j
                 << "] = ";
            cin >> a[i][j];
        }
    }
}
void afis(int **a, int n, int m)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void fill0(int **&a, int n, int m)
{
    int i,j;
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            a[i][j] = 0;
        }
    }
}