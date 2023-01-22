#include <iostream>
#include <fstream>
using namespace std;
ofstream g;
int main()
{
    char s[] = "";

    cout << "Textul de scris la final de fisier: ";
    cin.getline(s, 1000);

    g.open("136.out", ios_base::app); // append pentru a srie in continuare
    g << s;
    g.close();
    return 0;
}