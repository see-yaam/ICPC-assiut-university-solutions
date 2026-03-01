#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int count = 0;

    while(n > 1)
    {
        n = n / 2;
        count++;
    }

    printf("%lld\n", count);

    return 0;
}