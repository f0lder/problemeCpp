#include <iostream>
using namespace std;
int main()
{
    int n, mini, x, i = 0;
    cin >> n;

    i++;
    cout << "Numarul_" << i << " = ";
    cin >> x; // citim primul nr
    n--; // am citit un numar
    mini = x; // pp ca e min

    while (n >= 1) // cat timp mai avem numere
    {
        n--;
        i++;
        cout << "Numarul_" << i << " = ";
        cin >> x; // citim un nr
        if(x < mini){ //comparam cu min
            mini = x;
        }
    }

    cout << "min = "<<mini;
    return 0;
}