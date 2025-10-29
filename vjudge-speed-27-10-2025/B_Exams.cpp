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
        int school, student, passed;
        cin >> school >> student >> passed;
        int totalStudent = school * student;
        if ((totalStudent * 0.5) < passed)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }

    return 0;
}