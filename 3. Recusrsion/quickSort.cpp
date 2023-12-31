#include <bits/stdc++.h>
using namespace std;

void arrayPrinter(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void arrayScanner(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[low];

    int count = 0;

    for (int i = low + 1; i <= high; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    int rightIndex = low + count;
    swap(arr[low], arr[rightIndex]);

    int i = low;
    int j = high;

    while (i < rightIndex && j > rightIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < rightIndex && j > rightIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return rightIndex;
}

void quickSort(int *arr, int low, int high)
{
    if (low >= high)
        return;

    int p = partition(arr, low, high);

    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);
}

int main()
{
    int n;
    int *arr;
    cin >> n;
    arr = new int[n];

    arrayScanner(arr, n);

    cout << "Original Array: ";
    arrayPrinter(arr, n);
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    arrayPrinter(arr, n);
    cout << endl;
}