#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int b;
        scanf("%d", &b);
        int count = 0;
        for (int i = 1; i <= b; i++)
        {
            int c;
            scanf("%d", &c);
            if (b % 2 == 0)
            {
                if (c > 0)
                {
                    count++;
                }
            }
            else
            {
                if (c < 0)
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}