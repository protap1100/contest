#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;
    if (abs(X - Y) <= Z)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}