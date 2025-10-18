#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int flag = 0;
    for (int i = a; i <= b; i++)
    {
        int n = i;
        int lucky = 1;
        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 4 && digit != 7)
            {
                lucky = 0;
                break;
            }
            n /= 10;
        }
        if (lucky)
        {
            printf("%d ", i);
            flag = 1;
        }
    }
    if (!flag)
        printf("-1");
    return 0;
}
