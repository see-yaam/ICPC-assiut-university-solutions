#include <stdio.h>
int min_max(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        else if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d ", min);
    printf("%d", max);
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

    min_max(arr, n);

    //     for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }

    return 0;
}