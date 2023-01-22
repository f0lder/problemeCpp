#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[256], c[21], *t;

    cout << "Dati textul: ";
    cin.getline(s, 256);

    cout << "Dati cuvantul: ";
    cin >> c;

    t = strtok(s, " ");
    while (t != NULL)
    {
        char *aux;
        strcpy(aux, t);
        aux = strncpy(aux, strrev(aux), strlen(c));
        // cout << aux << endl;
        if (!strcmp(aux, strrev(c)))
        {
            cout << t << endl;
        }
        t = strtok(NULL, " ");
    }
    return 0;
}
//neterminat