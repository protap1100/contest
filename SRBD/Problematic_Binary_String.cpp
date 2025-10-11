#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tCase;
    cin >> tCase;
    while (tCase--)
    {
        int num;
        string str;
        cin >> num >> str;
        string t = str;
        int count = 0;
        bool impossible = false;
        for (int i = 0; i < num; i++)
        {
            char expected = (i % 2 == 0 ? '0' : '1');
            if (t[i] != expected)
            {
                if (i + 1 >= num)
                {
                    impossible = true;
                    break;
                }
                for (int j = i; j <= i + 2 && j < num; j++)
                    t[j] = (t[j] == '0' ? '1' : '0');

                count++;
            }
        }
        if (impossible)
            cout << -1 << "\n";
        else
            cout << count << "\n";
    }
    return 0;
}
