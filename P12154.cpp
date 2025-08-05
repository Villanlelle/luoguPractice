#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long num = 0;
    for (long long i = 1; i <= 2025; i++)
    {
        if ((i * i * i - 3) % 10 == 0)
        {
            num++;
        }
    }
    printf("%lld\n", num);
    return 0;
}