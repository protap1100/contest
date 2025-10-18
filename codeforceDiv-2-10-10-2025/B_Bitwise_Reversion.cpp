#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tCase;
    cin >> tCase;
    while (tCase--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if ((x & y) == (y & z) && (y & z) == (z & x))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}