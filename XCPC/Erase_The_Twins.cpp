#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tCase;
    cin >> tCase;
    while (tCase--)
    {
        int num;
        cin >> num;
        string str;
        cin >> str;
        stack<char> st;
        for (char c : str)
        {
            if (!st.empty() && st.top() == c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        cout << st.size() << endl;
    }
    return 0;
}