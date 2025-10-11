#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int len = s.size()/2;
    s.erase(len,1);
    cout << s << endl;
    return 0;
}