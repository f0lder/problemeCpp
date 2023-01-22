#include <iostream>
using namespace std;
int combinari(int n, int k)
{
    if (k == 0 || k == n) {
        return 1;
    }
    return combinari(n - 1, k - 1) + combinari(n - 1, k);
}
int aranjamente(int n, int k)
{
    if (k == 0 || k == n) {
        return 1;
    }
    if (k > n || n < 0 || k < 0) {
        return 0;
    }
    return aranjamente(n - 1, k - 1) *k + aranjamente(n - 1, k);
}
int main()
{
    int n, k;

    cout << "n = ";
    cin >> n;

    cout << "k = ";
    cin >> k;

    cout << "Combinari de " << n << " luate cate " << k << " = " << combinari(n, k)<<"\n";
    cout << "Aranjamente de  " << n << " luate cate " << k << " = " << aranjamente(n, k);
}