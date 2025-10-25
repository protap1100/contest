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
        int a, b;
        cin >> a >> b;
        int sum = 0;
        if (a < b)
        {
            for (int i = a + 1; i < b; i++)
            {
                if (i % 2 != 0)
                {
                    sum = sum + i;
                }
            }
            cout << sum << endl;
        }
        else
        {
            for (int i = b + 1; i < a; i++)
            {
                if (i % 2 != 0)
                {
                    sum = sum + i;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}