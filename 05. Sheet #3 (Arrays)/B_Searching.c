#include <stdio.h>
int main()
{
    long long int n, x, i;
    scanf("%lld", &n);
    long long int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    scanf("%lld", &x);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%lld", i);
            break;
        }
    }
    if (i == n)
        printf("-1");
    return 0;
}