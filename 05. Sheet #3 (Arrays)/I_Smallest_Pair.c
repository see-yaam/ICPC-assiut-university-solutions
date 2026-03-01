#include <stdio.h>
int main()
{
    int T, n;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int min = 9999999;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int result = arr[i] + arr[j] + (j - i);
                if (result < min)
                {
                    min = result;
                }
            }
        }
        printf("%d", min);
    }

    return 0;
}