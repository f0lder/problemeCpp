#include <iostream>
using namespace std;
//foloseste alg lui Euclid
void cmmdc(int a, int b, int &rez) {
    if (b == 0) {
        rez = a;
        return;
    }
    cmmdc(b, a % b, rez);
}
int main()
{

    int a,b,r;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cmmdc(a,b,r);
    cout << "Cmmdc este: "<<r;

    return 0;
}