#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int n, i, k;
    cin >> n;
    int *v = new int(n);

    srand(time(NULL));
    cout << "Parcurgere normala: ";
    for (i = 0; i < n; i++)
    {
        // generam numere aleatoare pentru v
        v[i] = i + 1;
        cout << v[i] << " ";
    }
    cout << endl
         << "Parcurgere alternativ: ";
    for (i = 0, k = n - 1; i < n / 2; i++, k--) 
    {
        //cand i creste k scade 
        cout << v[i] << " " << v[k] << " ";
    }

    if (n % 2 != 0)
    {
        cout << v[n%2+1];
    }
    return 0;
}