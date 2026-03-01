#include<stdio.h>
int main() {
   char str[1000];
   scanf("%s",&str);

    int palindrom = 1;
    int i = 0;
    int j = strlen(str) - 1;
    while (i < j)
    {
        if (str[i] != str[j])
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


    return 0;
}
