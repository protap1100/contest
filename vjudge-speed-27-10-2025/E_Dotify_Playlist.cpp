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
        int N, K, L;
        cin >> N >> K >> L;
        vector<pair<int, int>> songs(N);
        for (int i = 0; i < N; i++)
        {
            cin >> songs[i].first >> songs[i].second;
        }
        vector<int> sameL;
        for (int i = 0; i < N; i++)
        {
            if (songs[i].second == L)
            {
                sameL.push_back(songs[i].first);
            }
        }
        int res = 0;
        if (sameL.size() < K)
        {
            cout << -1 << nl;
            continue;
        }
        else
        {
            sort(sameL.begin(), sameL.end(), greater<int>());
            for (int i = 0; i < K; i++)
            {
                res += sameL[i];
            }
        }
        cout << res << nl;
    }
    return 0;
}
