#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int first = b + c;
    int second = d / first;
    int remaining = d % first;
    int result = (second * b + min(remaining, b)) * a;
    cout << result << endl;
    return 0;
}