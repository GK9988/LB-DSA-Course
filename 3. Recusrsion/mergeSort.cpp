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

void merge(int *arr, int low, int high)
{
    int mid = low + (high - low) / 2;

    int len1 = mid - low + 1;
    int len2 = high - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int mainIndex = low;

    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[mainIndex++];
    }

    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[mainIndex++];
    }

    mainIndex = low;
    int i = 0;
    int j = 0;

    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[mainIndex++] = arr1[i++];
        }
        else
        {
            arr[mainIndex++] = arr2[j++];
        }
    }

    while (i < len1)
    {
        arr[mainIndex++] = arr1[i++];
    }

    while (j < len2)
    {
        arr[mainIndex++] = arr2[j++];
    }
}

void mergeSort(int *arr, int low, int high)
{

    if (low >= high)
        return;

    int mid = low + (high - low) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, high);
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

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: " << endl;
    arrPrinter(arr, n);
    cout << endl;
}