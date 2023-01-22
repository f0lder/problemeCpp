#include <iostream>
using namespace std;
struct multime
{
    int nr;
    int *v;
    char nume[255];
};
void initializare_multime(multime &m)
{
    cout << "Numele multimii: ";
    cin >> m.nume;

    cout << "Dati nr de elemente pentru multimea " << m.nume << " :";
    cin >> m.nr;

    m.v = new int(m.nr + 1);

    for (int i = 1; i <= m.nr; i++)
    {
        cout << "Dati elementul nr " << i << " :";
        cin >> m.v[i];
    }
}
void afisare_multime(multime m)
{
    cout << "Multimea " << m.nume << " contine " << m.nr << " elemente: {";
    for (int i = 1; i <= m.nr; i++)
    {
        cout << m.v[i] << ";";
    }
    cout << "}" << endl;
}
int main()
{
    multime a;
    initializare_multime(a);
    afisare_multime(a);
    return 0;
}