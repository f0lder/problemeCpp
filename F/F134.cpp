#include <iostream>
#include <fstream>
using namespace std;
ifstream f("initial.txt");
ofstream g("copie.txt");
int main()
{
    char s[] = "";
    while (f.getline(s, 1000))
    {
        cout << s << endl;
        g << s << endl;
    }
    f.close();
    g.close();
    return 0;
}