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
        int a, b;
        cin >> a >> b;
        ll even = 0, odd = 0;
        for (int i = a; i <= b; i++)
        {
            if (i % a == 0)
            {
                if (i % 2 == 0)
                {
                    even += i;
                }
                else
                {
                    odd += i;
                }
            }
        }
        if (even >= odd)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}