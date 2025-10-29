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
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int timeNeed = X * Y;
        int timeAvail = Z * 24 * 60;

        if (timeNeed <= timeAvail)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}