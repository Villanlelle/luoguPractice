#include <bits/stdc++.h>
using namespace std;
struct cai
{
    double w;
    double v;
    double p;
};
bool comparecai(const cai &a, const cai &b)
{
    return a.p > b.p;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, t;
    cin >> n >> t;
    vector<cai> xu(n);
    for (int i = 0; i < n; i++)
    {
        cin >> xu[i].w >> xu[i].v;
        xu[i].p = xu[i].v / xu[i].w;
    }
    sort(xu.begin(), xu.end(), comparecai);
    double sumv = 0;
    for (int i = 0; i < n; i++)
    {
        if (t == 0)
            break;
        if (xu[i].w <= t)
        {
            t -= xu[i].w;
            sumv += xu[i].v;
        }
        else
        {
            sumv += t * xu[i].p;
            t = 0;
        }
    }
    printf("%.2lf\n", sumv);
    return 0;
}