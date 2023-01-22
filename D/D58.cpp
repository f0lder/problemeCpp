#include <iostream>
using namespace std;

int nterm(int a, int d, int n) {
    if (n == 1) {
        return a;
    }
    return nterm(a, d, n - 1) + d;
}
int main()
{

    int a,r,n;

    cout << "Primul termen: ";
    cin >> a;
    cout << "Ratia: ";
    cin >> r;
    cout << "Termenul de calc: ";
    cin >> n;
    cout << "Termenul este:"<<nterm(a,r,n);
    return 0;
}