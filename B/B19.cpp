#include <iostream>
using namespace std;
int main()
{
    int n, m, i;

    cout << "Dimensiuna primului vect: ";
    cin >> n;

    cout << "Dimensiuna vect2: ";
    cin >> m;

    int *v1 = new int(n);
    int *v2 = new int(m);
    int *c = new int(n + m);

    for (i = 0; i < n; i++)
    {
        cout << "v1[" << i << "] = ";
        cin >> v1[i];
    }
    
    for (i = 0; i < m; i++)
    {
        cout << "v2[" << i << "] = ";
        cin >> v2[i];
    }

    int i1, i2;
    i1 = i2 = 0;
    
    for (i = 0; i < n + m - 1; i++)
    {
        if (v1[i1] > v2[i2])
        {
            c[i] = v2[i2];
            i2++;
        }
        else
        {
            c[i] = v1[i1];
            i1++;
        }
        cout << c[i] << " ";
    }

    return 0;
}