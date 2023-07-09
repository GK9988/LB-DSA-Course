#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num = n;

    int i = 0;
    int answer = 0;

    while (n)
    {
        int bit = n % 10;
        n /= 10;
        if (bit == 1)
        {
            answer = answer + pow(2, i);
        }
        i++;
    }

    cout << "Binary to Decimal of " << num << " is = " << answer;
}