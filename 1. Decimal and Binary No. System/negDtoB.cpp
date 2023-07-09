#include <bits/stdc++.h>
using namespace std;

int negDtoB(int n)
{
    int num = 0;
    int i = 0;

    while (n)
    {
        int bit = n & 1;
        num = (bit * pow(10, i)) + num;
        i++;
        n = n >> 1;
    }

    return num;
}

int main()
{
    int n;
    cin >> n;

    if (n >= 0)
    {
        cout << "binary of " << n << " is = " << negDtoB(n);
    }
    else
    {
        int result = ~n - 1;
        int answer = negDtoB(result);
        // cout << negNum << " " << result << " " << answer;
        cout << "binary of " << n << " is = " << answer;
    }
}