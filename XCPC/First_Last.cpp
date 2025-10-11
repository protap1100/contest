#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    vector<long long int> vec(num);
    for (int i = 0; i < num; i++)
    {
        cin >> vec[i];
    }
    map<long long int, pair<int, int>> mp;
    for (int i = 0; i < num; i++)
    {
        if (mp.find(vec[i]) == mp.end())
        {
            mp[vec[i]].first = i + 1;
            mp[vec[i]].second = i + 1;
        }
        else
        {
            mp[vec[i]].second = i + 1;
        }
    }
    for (auto val : mp)
    {
        cout << val.first << " " << val.second.first << " " << val.second.second << "\n";
    }
    return 0;
}