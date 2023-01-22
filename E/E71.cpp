#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[255];
    cout << "Dati textul: ";
    cin.getline(s, 255);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'z')
        {
            s[i] = 'a';
        }
        else
        {
            s[i]++;
        }
    }

    cout << s;
    return 0;
}