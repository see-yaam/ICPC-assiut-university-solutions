#include <stdio.h>
int main()
{
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (long long int i = 0; i < n - 1; i++)
    {
        for (long long int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                long long int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //       for(long long int i=0;i<n;i++){
    //     printf("%lld ",arr[i]);
    //    }

    long long int sum = 0;
    for (long long int i = 0; i < k; i++)
    {
        if(arr[i] <= 0) 
        {
            break; // negative dekhle theme jabo ... cz negative number er sum 0 thekeo choto hobe
        }

        sum = sum + arr[i];
    }
    printf("%lld", sum);

    return 0;
}

/*
2
2  4  6  7
i i+1

mone koro 3 ta elemnt er higest sum
tahole age element gulo sort korbo boro theke choto
then prothom 3 ta sum korbo
 */