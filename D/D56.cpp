#include <iostream>
using namespace std;
long long int factorial_r(int n) {
    //recursiv
    if (n == 0) {
        return 1;
    }
    return n * factorial_r(n - 1);
}

long long int factorial_i(int n) {
    //iterativ
    long long int r = 1;
    for (int i = 2; i <= n; i++) {
        r *= i;
    }
    return r;
}
int main()
{
    int n;
    cin >> n;
    cout << "n! = "<<factorial_r(n) <<"\n";
    cout << "n! = "<<factorial_i(n);
    return 0;
}