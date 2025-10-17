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
        int P, initialScore, subTage;
        cin >> P >> initialScore >> subTage;
        vector<int> contestant(P);
        for (int i = 0; i < P; i++)
        {
            cin >> contestant[i];
        }
        sort(contestant.begin(), contestant.end(), greater<int>());
        for (int i = 0; i < P && subTage > 0; i++)
        {
            if (contestant[i] > initialScore)
            {
                contestant[i] = 0;
                initialScore += 100;
                subTage--;
            }
            else
            {
                break;
            }
        }
        int count = 0;
        for (int i = 0; i < P; i++)
        {
            if (contestant[i] > initialScore)
                count++;
        }
        cout << count + 1 << "\n";
    }
    return 0;
}