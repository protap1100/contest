#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tCase;
    cin >> tCase;
    unordered_map<int, string> breaks = {
        {0, "00:00"},
        {11 * 60 + 11, "11:11"},
        {22 * 60 + 22, "22:22"}};
    vector<int> keys = {0, 11 * 60 + 11, 22 * 60 + 22};
    while (tCase--)
    {
        string time;
        cin >> time;
        int hh = stoi(time.substr(0, 2));
        int mm = stoi(time.substr(3, 2));
        int total = hh * 60 + mm;
        string ans = "00:00";
        for (int k : keys)
        {
            if (k >= total)
            {
                ans = breaks[k];
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
