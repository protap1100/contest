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
        int num;
        string str;
        cin >> num >> str; 
        string newStr = "";
        bool possible = true;
        for (int i = 0; i < num - 1; i++)
        {
            if (str[i] == '1' && str[i + 1] == '1')
            {
                possible = false; 
                break;
            }
        }
        if (possible)
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
    }
    return 0;
}
