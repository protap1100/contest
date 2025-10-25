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
        int arrSize, queries;
        cin >> arrSize >> queries;
        vector<int> vec(arrSize);
        for (int i = 0; i < arrSize; i++)
        {
            cin >> vec[i];
        }

        vector<pair<int, int>> vec1(queries);
        for (int i = 0; i < queries; i++)
        {
            cin >> vec1[i].first >> vec1[i].second;
        }
    }
    return 0;
}