#include <iostream>
using namespace std;
int main()
{
    int n, s = 0, inv = 0;
    cin >> n;

    cout << "a)\n";

    int aux;
    aux = n;
    while (aux > 0)
    {
        s += aux % 10;
        aux /= 10;
    }
    cout << "Suma cifrelor numarului " << n << " este " << s << endl;

    cout << "a)\n";
    aux = n;
    while (aux != 0)
    {
        inv = inv * 10 + aux % 10;
        aux /= 10;
    }
    cout << "Inversul numarului " << n << " este " << inv;
    return 0;
}