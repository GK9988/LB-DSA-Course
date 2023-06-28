#include <bits/stdc++.h>
using namespace std;

int dToB(int n)
{
    int answer = 0;
    int i = 0;

    while (n)
    {
        int bit = n & 1;
        n = n >> 1;
        answer = (pow(10, i) * bit) + answer;
        i++;
    }

    return answer;
}

int main()
{
    int n;

    cin >> n;

    cout << "Decimal " << n << " to binary = " << dToB(n);
}