#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
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
        vector<int> vec(num);
        for (int i = 0; i < num; i++)
        {
            cin >> vec[i];
        }
        int even = 0, odd = 0;
        for (int i = 0; i < num; i++)
        {
            if (vec[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even >= 2 || odd >= 2)
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