#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
void isPrime(int number)
{
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count == 2 && number > 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    isPrime(a);
    return 0;
}