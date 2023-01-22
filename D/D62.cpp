#include <iostream>
using namespace std;
int suma_cif(int n){
    if(n == 0){
        return 0;
    }
    return n % 10 + suma_cif(n/10);
}

int main()
{
    int n;
    cin >> n;
    cout << "Suma cifrelor este:" <<suma_cif(n);
    return 0;
}