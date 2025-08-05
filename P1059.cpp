#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<long long> need;
    for (long long s : arr)
    {
        need.insert(s);
    }
    cout << need.size() << endl;
    for (long long emo : need)
    {
        cout << emo << " ";
    }
    return 0;
}