#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tCase = 1;
    cin >> tCase;
    while (tCase--)
    {
        ll strCount, queries;
        cin >> strCount >> queries;
        string str;
        cin >> str;
        while (queries--)
        {
            ll a;
            cin >> a;
            int pos = 0;
            ll count = 0;

            while (a > 0)
            {
                if (str[pos] == 'A')
                {
                    a--;
                }
                else
                {
                    a /= 2;
                }
                pos = (pos + 1) % strCount;
                count++;
            }
            cout << count << nl;
        }
    }
    return 0;
}