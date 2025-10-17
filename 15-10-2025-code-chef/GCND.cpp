#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        int ans = 0;
        if (v[0] - 1 == v[n - 1])
            cout << v[n - 1] - 1 << nl;
        else
            cout << v[0] - 1 << nl;
    }
    return 0;
}