#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

int sum_main_diagonal=0;
int sum_secondary_diagonal=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                sum_main_diagonal=sum_main_diagonal+arr[i][j];
            }

            if(i+j==n-1){
                sum_secondary_diagonal=sum_secondary_diagonal+arr[i][j];

            }
        }
    }

    int answer=abs(sum_main_diagonal-sum_secondary_diagonal);
    printf("%d",answer);




    return 0;
}