#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<int> prices(num);
    for (int i = 0; i < num; i++)
    {
        cin >> prices[i];
    }
    set<int> sums;
    sums.insert(0);
    for (int price : prices)
    {
        set<int> newSums;
        for (int s : sums)
        {
            newSums.insert(s + price);
        }
        sums.insert(newSums.begin(), newSums.end());
    }
    int que;
    cin >> que;
    while (que--)
    {
        int left, right;
        cin >> left >> right;
        int count = 0;
        for (int s : sums)
        {
            if (s >= left && s <= right)
            {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}