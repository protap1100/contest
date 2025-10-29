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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == b && b == c && c == d && a == c && a == d)
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