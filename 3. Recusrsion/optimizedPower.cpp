#include <bits/stdc++.h>
using namespace std;

int power(int n, int pow)
{
    if (pow == 0)
        return 1;
    if (pow % 2)
        return n * power(n, pow / 2) * power(n, pow / 2);
    return power(n, pow / 2) * power(n, pow / 2);
}

int main()
{
    int n, pow;
    cin >> n >> pow;

    cout << endl;

    cout << n << " to the power " << pow << " = " << power(n, pow);
}