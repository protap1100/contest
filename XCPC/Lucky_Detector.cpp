#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long num;
    scanf("%lld", &num);
    int lucky = 0;
    while (num > 0)
    {
        int digit = num % 10;
        if (digit == 7)
        {
            lucky = 1;
            break;
        }
        num = num / 10;
    }
    if (lucky)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Not Lucky\n");
    }
    return 0;
}
