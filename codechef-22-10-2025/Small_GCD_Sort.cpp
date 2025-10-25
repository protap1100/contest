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
        vector<int> divisors;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
                divisors.push_back(i);
        }
        sort(divisors.rbegin(), divisors.rend());
        for (int d : divisors)
        {
            for (int i = d; i <= num; i += d)
            {
                if (__gcd(i, num) == d)
                    cout << i << " ";
            }
        }
        cout << nl;
    }
    return 0;
}