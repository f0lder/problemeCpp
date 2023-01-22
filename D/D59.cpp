#include <iostream>
using namespace std;

int nterm(int a, int q, int n) {
    if (n == 1) {
        return a;
    }
    return nterm(a, q, n - 1) * q;
}
int main()
{

    int a,q,n;

    cout << "Primul termen: ";
    cin >> a;
    cout << "Ratia: ";
    cin >> q;
    cout << "Termenul de calc: ";
    cin >> n;
    cout << "Termenul este:"<<nterm(a,q,n);
    return 0;
}