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
        int num;
        cin >> num;
        unordered_set<int> st;
        for (int i = 0; i < num; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        cout << (int)st.size() << '\n';
    }
    return 0;
}