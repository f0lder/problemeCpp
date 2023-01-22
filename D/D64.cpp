#include <iostream>
using namespace std;

int nr_zero(int n) {
    if (n == 0) {
        return 1;
    }
    if (n < 10) {
        return n == 0;
    }
    int ultima_cifra = n % 10;
    return (ultima_cifra == 0) + nr_zero(n / 10);
}


int main()
{
    int n;
    cin >> n;

    cout << "Nr de zero: "<<nr_zero(n);
    return 0;
}