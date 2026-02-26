#include <stdio.h>
int main()
{
    int n, a, b, j, min, max, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &a, &b);
        if (a < b)
        {
            min = a;
            max = b;
        }
        else
        {
            min = b;
            max = a;
        }
        for (j = min + 1; j < max; j++)

        {
            if (j % 2 != 0)
            
                sum = sum + j;
        }
        printf("%d\n", sum);
        sum=0;
    }

    return 0;
}