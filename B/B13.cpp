#include <iostream>
using namespace std;
int main()
{
    int n, aux, inv = 0;
    cin >> n;
    aux = n;
    while (aux != 0)
    {
        inv = inv * 10 + aux % 10;
        aux /= 10;
    }

    if (inv == n)
    {
        cout << "Nr este palindrom";
    }
    else
    {
        cout << "Nr nu este palindrom!";
    }
    return 0;
}