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

int main()
{

    int n;
    cin >> n;
    int arr[n];
    arrScanner(arr, n);

    int min = arr[0];
    int max = arr[0];

    cout << "The Array: ";
    arrPrinter(arr, n);

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}
