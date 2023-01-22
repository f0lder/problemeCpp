#include <iostream>
#include <fstream>
using namespace std;

ifstream f("intro.txt");
ofstream g("iesire.txt");

int main()
{
    int n, x, a, b, *v, nr = 0, i, j;

    f >> n; // citim nr de elemente
    v = new int(n);

    for (int i = 0; i < n; i++)
    {
        v[i] = 0;
    }

    cout << "Dati minim: ";
    cin >> a;

    cout << "Dati maxim: ";
    cin >> b;

    for (i = 1; i <= n; i++)
    {
        f >> x;
        if (x > a && x < b)
        {
            v[nr] = x;
            nr++;
        }
    }
    f.close();

    // sortam v
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (v[j] < v[j + 1])
            {
                int aux;
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << v[i] << " ";
        g << v[i]<< endl;
    }

    g.close();
    return 0;
}