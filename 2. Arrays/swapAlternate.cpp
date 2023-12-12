#include <bits/stdc++.h>
using namespace std;

void arrScanner(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void arrPrinter(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int *arr, int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i < n - 1)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    arrScanner(arr, n);

    cout << "The Original Array: ";
    arrPrinter(arr, n);
    cout << endl;

    swapAlternate(arr, n);

    cout << "Alternatively Swapped Array: ";
    arrPrinter(arr, n);
    cout << endl;
}