#include <bits/stdc++.h>
using namespace std;

// check whether 1 is in the arr or not.

bool linearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    if (linearSearch(arr, 10, 1))
        cout << "1 found in the arr";
    else
        cout << "1 not found";
}