#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[255], *t;
    cout << "Dati textul: ";
    cin.getline(s, 255);

    t = strtok(s, " ");
    while (t != NULL)
    {
        t[0] = toupper(t[0]);
        cout << t << " ";
        t = strtok(NULL," ");
    }
    return 0;
}