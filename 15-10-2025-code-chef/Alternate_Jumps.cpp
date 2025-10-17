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
        int pads;
        cin >> pads;
        int pos = pads;
        for (int i = 1; i <= pads - 1; i++)
        {
            int jump = pads - i;
            if (i % 2 == 1)
            {
                pos -= jump;
            }
            else
            {
                pos += jump;
            }
        }
        cout << pos << "\n";
    }
    return 0;
}