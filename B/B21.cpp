#include <iostream>
using namespace std;
int main()
{
    int n, i, r;
    bool ve = true;
    cin >> n;
    int *v = new int(n);

    for (i = 0; i < n; i++)
    {
        cout << "v[" << i + 1 << "] = ";
        cin >> v[i];
    }
    r = v[1] / v[0];
    for (i = 1; i < n - 1; i++)
    {
        if (v[i + 1] / v[i] != r)
        {
            ve = false;
            break;
        }
    }
    if (ve)
    {
        cout << "este progresie geom cu ratia = " << r;
    }
    else
    {
        cout << "Nu este";
    }

    return 0;
}