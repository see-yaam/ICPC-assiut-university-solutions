#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);  

    int original = n;  
    int reverse = 0;   

    while (n != 0)
    {
        int digit = n % 10;          
        reverse = reverse * 10 + digit; 
        n = n / 10;                  
    }

    printf("%d\n", reverse); 

    if (original == reverse)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}