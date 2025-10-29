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
        int N;
        cin >> N;
        string first, second;
        cin >> first >> second;
        int chef1 = 0, chef2 = 0;
        for (int i = 0; i < N; i++)
        {
            if (first[i] == second[i])
                continue;
            if ((first[i] == 'R' && second[i] == 'S') ||
                (first[i] == 'S' && second[i] == 'P') ||
                (first[i] == 'P' && second[i] == 'R'))
                chef1++;
            else
                chef2++;
        }
        int ans = (chef2 - chef1 + 2) / 2;
        cout << max(0, ans) << nl;
    }
    return 0;
}