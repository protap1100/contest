#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    vector<int> vec(num);
    for (int i = 0; i < num; i++)
    {
        cin >> vec[i];
    }
    map<int, pair<int, int>> mp;

    for (int i = 0; i < num; i++)
    {
        if (mp.find(vec[i]) == mp.end())
        {
            mp[vec[i]] = {i + 1, i + 1};
        }
        else
        {
            mp[vec[i]].second = i + 1;
        }
    }

    for (auto &p : mp)
    {
        cout << p.first << " " << p.second.first << " " << p.second.second << "\n";
    }

    return 0;
}
