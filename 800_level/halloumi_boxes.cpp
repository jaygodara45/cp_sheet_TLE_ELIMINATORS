/*
Logic: If k is atleast 2, we can keep swapping until the array becomes sorted. So answer is "YES".
If k is 1: we can't do anything so if array is already sorted return "YES" else "NO".
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n, -1);
    int sorted = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            sorted = 0;
    }

    if (k >= 2 || sorted == 1)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {

        cout << "NO" << endl;
        return;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}