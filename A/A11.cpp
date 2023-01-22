#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int p1 = 100, p2 = 100;

    while ((p1 >= 0) && (p2 >= 0))
    {
        srand(time(NULL));     // cititi despre srand()
        p1 = p1 - rand() % 20; // cititi despre rand(), ce intoarce rand()%20?
        p2 = p2 - rand() % 20; // un numar de la 0 la 19
    }
    if (p1 >= 0)
        cout << "p1 win";
    else
        cout << "p2 win";
    system("Pause");
}
// Enuntati cat mai detaliat problema pe care ar tb sa o rezolve codul de mai sus
// 2 jucatori arunca un zar de la 0 la 19 puncte, primul care ajunge la 100 de puncte castiga 