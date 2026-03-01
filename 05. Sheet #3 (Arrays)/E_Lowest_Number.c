#include <stdio.h>
int main()
{
    int n,low,i,index;
    scanf("%d", &n);
    long long int arr[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    low=arr[1];
    index=1;
    for (i = 1; i <=n; i++)
    {
        
        if (low>arr[i]){
        low=arr[i];
        index=i;}
    }
printf("%d %d", low,index);
    return 0;
}