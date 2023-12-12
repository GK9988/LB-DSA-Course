#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> &arr, int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(vector<int> &arr, int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    // Write your code here
    pair<int, int> p;
    int first = firstOcc(arr, n, k);
    int last = lastOcc(arr, n, k);
    p.first = first;
    p.second = last;
    return p;
}

int main()
{

    int n;
    int key;
    vector<int> arr;
    cin >> n;
    cin >> key;
    pair<int, int> p;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

        p = firstAndLastPosition(arr, n, key);

    cout << p.first << " " << p.second << endl;
}