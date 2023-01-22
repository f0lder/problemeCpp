#include <iostream>
#include <fstream>
using namespace std;

ifstream f("numere.txt");

int main()
{
    int n, x, s = 0;

    f >> n; // citim nr de elemente
    
    for (int i = 1; i <= n; i++)
    {
        f >> x;
        if(x % 2 != 0 ){
            s += x;
        }
    }
    cout << "Suma nr pare este: "<< s;
    return 0;
}