#include <iostream>
using namespace std;
int main()
{
    int n, i, x, m;
    bool gasit = 0;
    cout << "Dimensiunea vect: ";
    cin >> n;
    int *v = new int(n);

    for (i = 0; i < n; i++)
    {
        cout << "v[" << i + 1 << "] = ";
        cin >> v[i];
    }

    cout << "Nr de cautat: ";
    cin >> x;
    m = v[0];
    for (i = 0; i < n; i++)
    {
        if (x == v[i])
        {
            gasit = true;
            cout << "Valoare gasita la indicele : " << (i + 1) << endl;
        }
        if (m > v[i])
        {
            m = v[i];
        }
    }
    if (!gasit)
    {
        cout << "Nr nu a fost gasit!" << endl;
    }
    cout << "Minimul vectorului este: " << m;
    return 0;
}