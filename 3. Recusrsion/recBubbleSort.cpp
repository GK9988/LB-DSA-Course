#include <bits/stdc++.h>
using namespace std;

void arrPrinter(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void arrScanner(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void recBubbleSort(int *arr, int n)
{

    if (n == 1 || n == 0)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    recBubbleSort(arr, n - 1);
}

int main()
{
    int *arr;
    int n;
    cin >> n;
    arr = new int[n];

    arrScanner(arr, n);

    cout << "Array: " << endl;
    arrPrinter(arr, n);
    cout << endl;

    recBubbleSort(arr, n);

    cout << "Sorted Array: " << endl;
    arrPrinter(arr, n);
    cout << endl;
}