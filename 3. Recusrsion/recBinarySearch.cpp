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

int recBinarySearch(int *arr, int l, int h, int key)
{

    if (l > h)
        return -1;

    int mid = l + (h - l) / 2;

    if (arr[mid] == key)
        return mid;
    if (arr[mid] > key)
        return recBinarySearch(arr, l, mid - 1, key);
    return recBinarySearch(arr, mid + 1, h, key);
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

    int answer = recBinarySearch(arr, 0, n - 1, key);

    if (answer != -1)
    {
        cout << "Key found at position: " << answer + 1;
    }
    else
    {
        cout << "Key not found in the array";
    }
}