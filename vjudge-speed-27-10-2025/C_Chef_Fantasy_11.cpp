#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tCase;
    cin >> tCase;
    while (tCase--)
    {
        ll choices;
        cin >> choices;
        cout << choices * (choices - 1) << nl;
    }
    return 0;
}