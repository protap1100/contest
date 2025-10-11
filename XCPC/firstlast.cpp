#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> v(n);

    map<long long, pair<int, int>> pos;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        long long val = v[i];

        if (pos.find(val) == pos.end())
        {
            pos[val] = make_pair(i + 1, i + 1);
        }
        else
        {
            pos[val].second = i + 1;
        }
    }

    for (map<long long, pair<int, int>>::iterator it = pos.begin(); it != pos.end(); it++)
    {
        cout << it->first << " " << it->second.first << " " << it->second.second << "\n";
    }

    return 0;
}
