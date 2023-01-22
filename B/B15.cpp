#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int n, m, maxi, *aux, i;

    cout << "Dimensiuna primului vect: ";
    cin >> n;

    cout << "Dimensiuna vect2: ";
    cin >> m;

    int *v1 = new int(n);
    int *v2 = new int(m);

    srand(time(NULL));
    cout << "v1 = ";
    for (i = 0; i < n; i++)
    {
        // generam numere aleatoare pentru v1
        v1[i] = rand() % 100;
        cout << v1[i] << " ";
    }
    cout << endl << "v2 = ";
    for (i = 0; i < m; i++)
    {
        // generam numere aleatoare pentru v2
        v2[i] = rand() % 100;
        cout << v2[i] << " ";
    }
    cout << endl;
    if (n > m)
    {
        maxi = n;
    }
    else
    {
        maxi = m;
    }

    int *prod = new int(maxi);
    for (i = 0; i < maxi; i++)
    {
        if (i >= m || i >= n)
        {
            prod[i] = 0;
        }
        else
        {
            prod[i] = v1[i] * v2[i];
        }
    }
    cout << endl << "prod = ";
    for (i = 0; i < maxi; i++)
    {
        cout << prod[i] << " ";
    }
    return 0;
}