#include <iostream>
using namespace std;

int binarySearch(int *array, int left, int right, int x)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;

        if (array[mid] == x)
        {
            return mid;
        }

        if (array[mid] > x)
        {
            return binarySearch(array, left, mid - 1, x);
        }

        return binarySearch(array, mid + 1, right, x);
    }
    return -1;
}

int main()
{
    int *v, n, x;
    cout << "n = ";
    cin >> n;

    v = new int[n + 1];
    //vect trebuie sa fie sortat
    for (int i = 1; i <= n; i++)
    {
        cout << "v[" << i << "] = ";
        cin >> v[i];
    }

    cout << "Elem de cautat: ";
    cin >> x;

    int result = binarySearch(v, 1, n, x);

    if (result == -1)
    {
        cout << "Elementul nu a fost gasit." << endl;
    }
    else
    {
        cout << "Element gasit la index: " << result << endl;
    }

    return 0;
}