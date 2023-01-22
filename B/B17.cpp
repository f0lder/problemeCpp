#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // partition the array
        int pivot = partition(arr, low, high);

        // sort the sub arrays independently
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

void afis(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int n;
    cout << "Dimensiunea vect: ";
    cin >> n;
    int *v = new int(n);

    for (int i = 0; i < n; i++)
    {
        cout << "v[" << i+1 << "] = ";
        cin >> v[i];
    }

    afis(v, n);
    cout << endl;
    quickSort(v, 0, n - 1);
    cout << "Vect sortat:" << endl;
    afis(v, n);
    return 0;
}