#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tCase;
    cin >> tCase;
    while (tCase--)
    {
        int n;
        cin >> n;
        vector<ll> vec(n), vec2(n);
        ll cost = 0;

        for (int i = 0; i < n; i++)
            cin >> vec[i];
        for (int i = 0; i < n; i++)
        {
            cin >> vec2[i];
            cost += vec2[i];
        }
        ll mx = 0;
        vector<ll> dp(n, 0);
        for (int i = 0; i < n; i++)
        {
            dp[i] = vec2[i];
            for (int j = 0; j < i; j++)
            {
                if (vec[j] <= vec[i])
                {
                    dp[i] = max(dp[i], dp[j] + vec2[i]);
                }
            }
            mx = max(mx, dp[i]);
        }
        cout << cost - mx << nl;
    }

    return 0;
}