#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
     if (a < b && a < c)
    {
        cout << a << " ";
    }
    else if (b < c && b < a)
    {
        cout << b << " ";
    }
    else
    {
        cout << c << " ";
    }
    if (a > b && a > c)
    {
        cout << a << " ";
    }
    else if (b > c && b > a)
    {
        cout << b << " ";
    }
    else
    {
        cout << c << " ";
    }

   

    return 0;
}