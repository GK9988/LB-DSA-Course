#include <bits/stdc++.h>
using namespace std;

void arrPrinter(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void arrScanner(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int binarySearch(int *arr, int n, int key)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    arrScanner(arr, n);

    cout << "Array: " << endl;

    arrPrinter(arr, n);

    int key;

    cin >> key;

    int finalIndex = binarySearch(arr, n, key);

    if (!(finalIndex == -1))
    {
        cout << "Key " << key << " found at location " << finalIndex + 1;
    }
    else
    {
        cout << "Key " << key << " not found in the array";
    }
}