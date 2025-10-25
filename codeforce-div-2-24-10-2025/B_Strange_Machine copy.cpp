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
        ll strCount, query;
        cin >> strCount >> query;
        string str;
        cin >> str;
        while (query--)
        {
            ll a;
            cin >> a;
            if (a == 0)
            {
                cout << 0 << nl;
                continue;
            }
            int pos = 0;
            ll cnt = 0;
            while (a > 0)
            {
                if (a <= 100)
                {
                    while (a > 0)
                    {
                        if (str[pos] == 'A')
                        {
                            a--;
                        }
                        else if (str[pos] == 'B')
                        {
                            a /= 2;
                        }
                        pos = (pos + 1) % strCount;
                        cnt++;
                    }
                    break;
                }
                ll oldA = a;
                for (int i = 0; i < strCount && a > 0; i++)
                {
                    if (str[pos] == 'A')
                    {
                        a--;
                    }
                    else if (str[pos] == 'B')
                    {
                        a /= 2;
                    }
                    pos = (pos + 1) % strCount;
                    cnt++;
                }
                if (a == 0 || a >= oldA / 2)
                {
                    continue;
                }
            }
            cout << cnt << nl;
        }
    }
    return 0;
}