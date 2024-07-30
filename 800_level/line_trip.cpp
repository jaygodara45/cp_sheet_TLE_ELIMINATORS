/*
Logic: We want to find max distance it needs to travel without finding any gas station.
Start from 0, calculate distances between gas stations, take double of distance between
last gas station and x.
Return maximum of these values.
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    int ans = 0;
    vector<int> ai(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> ai[i];
    }
    ans = max(ans, ai[0]);
    for (int i = 1; i < n; i++)
    {

        ans = max(ans, abs(ai[i] - ai[i - 1]));
    }
    ans = max(ans, 2 * (x - ai[n - 1]));

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}