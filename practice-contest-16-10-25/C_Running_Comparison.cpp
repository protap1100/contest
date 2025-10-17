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
        vector<int> alice(num);
        vector<int> bob(num);
        for (int i = 0; i < num; i++)
        {
            cin >> alice[i];
        }
        for (int i = 0; i < num; i++)
        {
            cin >> bob[i];
        }
        int happyCount = 0;
        for (int i = 0; i < num; i++)
        {
            if (bob[i] <= 2 * alice[i] && alice[i] <= 2 * bob[i])
            {
                happyCount++;
            }
        }
        cout << happyCount << nl;
    }
    return 0;
}