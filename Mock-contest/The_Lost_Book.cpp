#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<int> vec;
    for (int i = 0; i < num; i++)
    {
        int val;
        cin >> val;
        vec.push_back(val);
    }
    int target;
    cin >> target;
    int result;
    int found = false;
    for (int i = 0; i < num; i++)
    {
        if (target == vec[i])
        {
            result = i;
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << result << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}