#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int main()
{
    int n, maxi = 0;
    while (!f.eof())
    {
        f >> n;
        if (n > maxi)
        {
            maxi = n;
        }
    }
    f.close();
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            g << j << " ";
        }
        g << endl;
    }
    g.close();
    return 0;
}