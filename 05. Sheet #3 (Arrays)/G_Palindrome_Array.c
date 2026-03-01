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
    int palindrom = 1;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            palindrom = 0;
            break;
        }
        i++;
        j--;
    }
    if (palindrom == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d", arr[i]);
    // }
    return 0;
}