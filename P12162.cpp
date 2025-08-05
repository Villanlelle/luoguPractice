#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long sum = 0, n, j, yu, he;
    long long arr[6];
    for (long long i = 1; i < 202504; i++)
    {
        n = i;
        j = 0;
        he = 0;
        do
        {
            yu = n % 10;
            arr[j] = yu;
            j++;
            n = n / 10;
        } while (n > 0);
        for (long long h = 0; h < j; h++)
        {
            he += arr[h];
        }
        if (he % 5 == 0)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}