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
        vector<int> vec(num);
        bool even = false, odd = false;

        for (int i = 0; i < num; i++)
        {
            cin >> vec[i];
            if (vec[i] % 2 == 0)
                even = true;
            else
                odd = true;
        }

        if (even && odd)
        {
            sort(vec.begin(), vec.end());
        }

        for (int i = 0; i < num; i++)
        {
            cout << vec[i] << " ";
        }
        cout << nl;
    }
    return 0;
}