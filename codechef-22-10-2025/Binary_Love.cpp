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
        cin >> num;
        string str;
        cin >> str;
        int c01 = 0, c10 = 0;
        for (int i = 1; i < num; i++)
        {
            if (str[i - 1] == '0' && str[i] == '1')
                c01++;
            if (str[i - 1] == '1' && str[i] == '0')
                c10++;
        }
        if (c01 == c10 && c01 > 0)
        {
            cout << "Alice\n";
        }
        else if (c01 == 0 || c10 == 0)
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Alice\n";
        }
    }
    return 0;
}