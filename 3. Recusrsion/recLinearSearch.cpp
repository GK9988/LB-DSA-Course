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

int recLinearSearch(int *arr, int n, int key)
{
    if (n == 0)
        return -1;
    if (arr[n - 1] == key)
        return n;
    return recLinearSearch(arr, n - 1, key);
}

int main()
{
    int *arr;
    int n;
    cin >> n;
    arr = new int[n];
    int key;

    arrScanner(arr, n);

    cout << "Array: " << endl;
    arrPrinter(arr, n);
    cout << endl;

    cin >> key;

    int answer = recLinearSearch(arr, n, key);

    if (answer != -1)
    {
        cout << "Key found at position: " << answer;
    }
    else
    {
        cout << "Key not found in the array";
    }
}