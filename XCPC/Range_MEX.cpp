#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, tCase;
    cin >> num >> tCase;
    vector<int> vec(num);
    for (int i = 0; i < num; i++)
    {
        cin >> vec[i];
    }
    while (tCase--)
    {
        int left, right;
        cin >> left >> right;
        left--;
        right--;
        int max = 0;
        while (true)
        {
            bool found = false;
            for (int i = left; i <= right; i++)
            {
                if (vec[i] == max)
                {
                    found = true;
                    break;
                }
            }
            if (!found)
                break;
            max++;
        }
        cout << max << endl;
    }
    return 0;
}