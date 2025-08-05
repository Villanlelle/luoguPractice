#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long sum = 0, n = 20250412, t, yu;
    int arr[8];
    for (long long i = 1; i <= 20250412; i++)
    {
        t = i;
        int j = 0;
        int zero = 0, two = 0, five = 0;
        do
        {
            yu = t % 10;
            arr[j] = yu;
            j++;
            t /= 10;
        } while (t > 0);
        for (int h = 0; h < j; h++)
        {
            if (arr[h] == 0)
            {
                zero++;
            }
            if (arr[h] == 2)
            {
                two++;
            }
            if (arr[h] == 5)
            {
                five++;
            }
        }
        if (zero >= 1 && two >= 2 && five >= 1)
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}