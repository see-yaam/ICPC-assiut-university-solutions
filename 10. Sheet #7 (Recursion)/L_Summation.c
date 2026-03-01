#include <stdio.h>
long long sum = 0;
void summation(int arr[], int n, int i)
{
    

    if (i == n)
    {
        return;
    }
        sum = sum + arr[i];

    summation(arr, n, i + 1);
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    summation(arr, n, 0);


    printf("%lld", sum);
    return 0;
}