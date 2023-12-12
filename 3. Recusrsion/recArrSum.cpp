#include <bits/stdc++.h>
using namespace std;

int arrScanner(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int arrPrinter(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int recArrSum(int *arr, int n)
{

    if (n == 0)
        return 0;

    return arr[0] + recArrSum(arr + 1, n - 1);
}

int main()
{
    int *arr;
    int n;
    cin >> n;
    arr = new int[n];

    arrScanner(arr, n);

    cout << "Array: ";
    arrPrinter(arr, n);
    cout << endl;

    cout << "Array Sum = " << recArrSum(arr, n);
}