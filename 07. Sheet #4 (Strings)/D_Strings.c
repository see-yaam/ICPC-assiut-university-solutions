#include <stdio.h>
#include <string.h>
int main()
{
    char str1[11];
    char str2[11];
    scanf("%s", str1);
    scanf("%s", str2);

    int lenstr1=strlen(str1);
    int lenstr2=strlen(str2);


    printf("%d ", lenstr1);
    printf("%d\n",lenstr2);
//    printf("\n");
    printf("%s%s\n", str1, str2);

    char temp = str1[0];
    str1[0] = str2[0];
    str2[0] = temp;
   // printf("\n");
    printf("%s %s", str1, str2);

    return 0;
}