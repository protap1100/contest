#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int res1 = a * 30;
    int res2 = b * 60;
    cout << res1 + res2;
    return 0;
}