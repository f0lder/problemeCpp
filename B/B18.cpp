#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void afis(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    int n, i, j;
    cout << "Dimensiunea vect: ";
    cin >> n;
    int *v = new int(n);

    for (i = 0; i < n; i++)
    {
        cout << "v[" << i + 1 << "] = ";
        cin >> v[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
    afis(v,n);

    return 0;
}