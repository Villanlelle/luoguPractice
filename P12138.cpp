#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int arr[2025];
    int i = 3, j = 1, real;
    arr[0] = 2;
    while (j < 2025)
    {
        real = 1;
        for (int k = 2; k * k <= i; k++)
        {
            if (i % k == 0)
            {
                real = 0;
                break;
            }
        }
        if (real == 1)
        {
            arr[j] = i;
            j++;
        }
        i += 2;
    }
    printf("%d", arr[2024]);
    return 0;
}