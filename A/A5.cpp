#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    long long int p, s;

    cout << "a)\n";

    p = 1;
    for (i = 1; i <= 3 * (n - 2); i += 3)
    {
        p = p * i;
    }
    cout << "P=1*4*7*...*(3*n-2) = " << p << endl;

    cout << "b)\n";
    s = 0;
    for (i = 1; i <= n; i++)
    {
        s += i * (i + 1);
    }
    cout << "S=1*2+2*3+3*4+...+n*(n+1) = " << s << endl;

    cout << "c)\n";
    s = 0;
    p = 1;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            p *= j;
        }
        s += p;
        p = 1;
    }
    cout << "S=1+(1*2)+(1*2*3)+...+(1*2*3*...*n) = " << s << endl;

    cout << "d)\n";
    p = 1;
    for (i = 1; i <= 2 * n - 1; i++)
    {
        p *= i;
    }
    cout << "P=(2n-1)! = " << p << endl;

    return 0;
}