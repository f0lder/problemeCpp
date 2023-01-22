#include <iostream>
#include <fstream>
using namespace std;

ifstream f("intro.txt");

int main()
{
    int n, x;

    f >> n; // citim nr de elemente
    
    for (int i = 1; i <= n; i++)
    {
        f >> x;
        cout << abs(x) << " ";
    }
    return 0;
}