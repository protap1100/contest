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
        ll n;
        cin >> n;
        vector<ll> vec(n);
        ll g;
        cin >> g;
        vec[0] = g;
        for (ll i = 1; i < n; i++)
        {
            cin >> vec[i];
        }
        for (ll i = 1; i < n; i++)
        {
            g = gcd(g, vec[i]);
        }
        ll ans = -1;
        for (ll i = 2; i <= 100; i++)
        {
            if (1 == __gcd(i, g))
            {
                ans = i;
                break;
            }
        }
        cout << ans << nl;
    }
    return 0;
}
