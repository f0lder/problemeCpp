#include <iostream>
using namespace std;
int main()
{
    int n, i, norma = 0;
    cin >> n;
    int *v = new int(n);

    for (i = 0; i < n; i++)
    {
        cout << "v[" << i + 1 << "] = ";
        cin >> v[i];
        if (v[i] < 0)
        {
            norma += (-1)*v[i];
        } else {
            norma += v[i];
        }
    }
    cout << "Norma: "<< norma;
    return 0;
}