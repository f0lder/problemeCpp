//inca nu e gata
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[100], *t, v[] = "'a','e','i','o','u','A','E','I','O','U'", sp[] = "' ','.','/'";
    int nrv, nrp; // nr vocale , nr de spatii
    nrv = nrp = 0;
    cin.getline(s, 100);
    t = strtok(s, v);
    while (t != NULL)
    {
        t = strtok(NULL, v);
        nrv++;
    }
    for (int i = 1; i < strlen(s); i++)
    {
        if (isspace(s[i]))
        {
            nrp++;
        }
    }

    cout << "Numarul de vocale :" << nrv << endl;
    cout << "Numarul de spatii :" << nrp << endl;
    cout << "Numarul de consoane :" << strlen(s) - (nrv + nrp) << endl;
    cout << "Numarul total de caractere :" << strlen(s) << endl;
    return 0;
}