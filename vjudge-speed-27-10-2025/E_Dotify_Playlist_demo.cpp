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
        int N, K, L;
        cin >> N >> K >> L;
        int a, b;
        int c, d;
        int e, f;
        cin >> a >> b;
        cin >> c >> d;
        cin >> e >> f;
        int result = 0;
        if (K == 1)
        {
            if (L == b)
            {
                result = a;
            }
            else if (L == d)
            {
                if (result < c)
                {
                    result == c;
                }
            }
            else if (L == f)
            {
                if (result < e)
                {
                    result == e;
                }
            }
            else
            {
                result = -1;
            }
        }
        cout << result << nl;
    }
    return 0;
}