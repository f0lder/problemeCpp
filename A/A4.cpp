#include <iostream>
using namespace std;
int main()
{
    int a, b, c, maxim;


    cout << "Maim dintre a b si c\n";

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    if (a > b)
    {
        if (c > a)
        {
            maxim = c;
        }
        else
        {
            maxim = a;
        }
    }
    else
    {
        if (c > b)
        {
            maxim = c;
        }
        else
        {
            maxim = b;
        }
    }

    cout << "Maxim = " << maxim;
    return 0;
}