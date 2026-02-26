#include <stdio.h>
int main()
{
    int arr[3];
    int orgarr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
        orgarr[i] = arr[i]; // original array take save korlam
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]); // sorted take print korlam
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", orgarr[i]); // original take  print korlam
    }

    return 0;
}