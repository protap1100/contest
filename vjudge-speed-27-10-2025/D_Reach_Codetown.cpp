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
    string target = "CODETOWN";
    while (tCase--)
    {
        string str;
        cin >> str;
        bool possible = true;
        for (int i = 0; i < 8; i++)
        {
            if ((str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') != (target[i] == 'A' || target[i] == 'E' || target[i] == 'I' || target[i] == 'O' || target[i] == 'U'))
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}
