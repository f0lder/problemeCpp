#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[21], p1[21] = "", p2[21] = "", f[21] = "";

    cout << "Dati cuvantul:";
    cin >> s;

    int n, i, j = 0;
    n = strlen(s);

    for (i = 0; i < n / 2; i++)
    {
        p1[i] = s[i];
    }

    for (i = n / 2 + (n % 2 != 0); i < n; i++)
    {
        p2[j] = s[i];
        j++;
    }

    if (n % 2 == 0)
    {
        // cuv are lungime para
        strcat(f, p2);
        strcat(f, p1);
    }
    else
    {
        strcat(f, p2);
        f[n / 2] = s[n / 2];
        strcat(f, p1);
    }
    cout << "Rezultat => " << f;
    return 0;
}