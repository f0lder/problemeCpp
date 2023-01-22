
#include <iostream>
#include <cmath>
using namespace std;


void factoriPrimi(int n)
{
	while (n % 2 == 0) // daca n este par impartim la 2 pana nu mai e par
	{
		cout << 2 << " ";
		n = n/2;
	}

	for (int i = 3; i <= sqrt(n); i = i + 2) // acum n este impar deci incepem verificarea de la 3
    // putem merge doar pana la radical de n pt eficienta
    //mergem din 2 in 2 ca nu are rost sa impartim la un numar par
	{
		while (n % i == 0) // cat timp i este divizor
		{
			cout << i << " ";
			n = n/i; //impartim n la i
		}
	}
    // daca mai ramane ceva inseamna ca n insusi este factor prim
	if (n > 2)
		cout << n << " ";
}

/* Driver code */
int main()
{
	int n;
    cin >> n;
	factoriPrimi(n);
	return 0;
}