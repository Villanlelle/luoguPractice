#include <bits/stdc++.h>
using namespace std;
void bian(int arr[4])
{
    int q = arr[0];
    arr[0] = arr[1];
    arr[1] = arr[2];
    arr[2] = arr[3];
    arr[3] = q;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int h, w;
    cin >> h >> w;
    int arr[4] = {2, 0, 2, 5};
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << arr[j % 4];
        }
        cout << endl;
        bian(arr);
    }
    return 0;
}