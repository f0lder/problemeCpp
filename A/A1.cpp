#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c;
    float p, A;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    p = (a + b + c) / 2.0;

    A = sqrt(1.0*p * (p - a) * (p - b) * (p - c));

    cout << "p = " << p << endl;
    cout << "Aria = " << A;

    return 0;
}