#include <iostream>
#include <fstream>
using namespace std;

ifstream f("fis1.txt");
ifstream g("fis2.txt");

int main()
{
    char s[] = "", c;
    int n1, n2;
    n1 = n2 = 0;

    while (f >> c)
    {
        n1++;
    }

    while (g >> c)
    {
        n2++;
    }

    f.close();
    g.close();

    if (n1 == n2)
    {
        cout << "egal";
    }
    return 0;
}