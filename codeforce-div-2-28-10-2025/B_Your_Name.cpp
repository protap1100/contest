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
        int size;
        cin >> size;
        string name1, name2;
        cin >> name1 >> name2; 
        sort(name1.begin(), name1.end());
        sort(name2.begin(), name2.end());

        if (name1 == name2)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
