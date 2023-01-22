#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n = 0;
    char s[255], c;
    cout << "Dati textul: ";
    cin.getline(s, 255);

    cout << "Caracterul: ";
    cin >> c;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            n++;
        }
    }
    cout << "Caracterul '" << c << "' apare in '" << s << "' de " << n << " ori.";
    return 0;
}