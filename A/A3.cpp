#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x;
    float rez;

    cout << "f(x)=x^3-log3(x);x>1\n";
    cout << "f(x)=2^x;xe(0,1]\n";
    cout << "f(x)=5;x<=0\n";

    cout << "x = ";
    cin >> x;

    if (x > 1)
    {
        rez = x * x * x - log2(x) / log2(3);
    }
    else if (x > 0 && x <=1)
    {
        rez = pow(2.0, x);
    }
    else
    {
        rez = 5;
    }

    cout << "f("<<x<<") = " << rez;

    return 0;
}