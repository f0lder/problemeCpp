#include <iostream>
using namespace std;

int cifra_max(int n) {
    if (n < 10) {
        return n;
    }
    int ultima_cif = n % 10;
    int cifra_max_din_nr_ramas = cifra_max(n / 10);
    return std::max(ultima_cif, cifra_max_din_nr_ramas);
}

int main()
{
    int n;
    cin >> n;
    cout << "Cifra max este:" << cifra_max(n);
    return 0;
}