#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    // printf("%d",min);

    int cnt_min = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            cnt_min++;
        }
    }

    // printf("%d",cnt_min);

    if (cnt_min % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}