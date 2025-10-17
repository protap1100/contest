#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tCase;
    cin >> tCase;
    while (tCase--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count1 = 0, count2 = 0;
        for (auto c : str)
        {
            if (c == '0')
                count1++;
            else
                count2++;
        }
        int move = min(count1, count2);
        if (move % 2 != 0)
            cout << "Zlatan\n";
        else
            cout << "Ramos\n";
    }
    return 0;
}