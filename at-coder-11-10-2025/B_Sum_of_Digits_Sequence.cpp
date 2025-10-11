#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;
    cin >> num;
    vector<int> A(num + 1);
    A[0] = 1;
    for (int i = 1; i <= num; i++)
    {
        int result = 0;
        for (int j = 0; j < i; j++)
        {
            int x = A[j];
            int digitSum = 0;
            while (x > 0)
            {
                digitSum = digitSum + (x % 10);
                x = x / 10;
            }
            result = result + digitSum;
        }
        A[i] = result;
    }
    cout << A[num] << endl;
    return 0;
}