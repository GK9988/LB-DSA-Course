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

int isSorted(int *arr, int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    if (arr[0] > arr[1])
        return 0;

    return isSorted(arr + 1, n - 1);
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

    if (isSorted(arr, n))
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is NOT sorted" << endl;
    }
}