#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[255], *t;
    int n = 0;
    cout << "Dati textul: ";
    cin.getline(s, 255);

    t = strtok(s, " ");
    while (t != NULL)
    {
        cout << t << endl;
        t = strtok(NULL," ");
        n++;
    }
    cout << "ne de cuvinte: "<<n;
    return 0;
}