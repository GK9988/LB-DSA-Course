#include <bits/stdc++.h>
using namespace std;

string recStrReverse(string base, int low, int high)
{

    if (low > high)
        return base;
    swap(base[low], base[high]);

    return recStrReverse(base, low + 1, high - 1);
}

int main()
{
    string str;

    cin >> str;

    cout << "Original String: " << str << endl;

    cout << "Reversed String: " << recStrReverse(str, 0, str.length() - 1);
}