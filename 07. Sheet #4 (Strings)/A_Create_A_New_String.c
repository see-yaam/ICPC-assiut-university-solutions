#include <stdio.h>
int main()
{
    char str[10000];
    char str2[10000];
    scanf("%s", str);
    scanf("%s", str2);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    int count2 = 0;
    for (int i = 0; str2[i] != '\0'; i++)
    {
        count2++;
    }
    printf("%d ", count);
    printf("%d\n", count2);
    printf("%s ", str);
    printf("%s", str2);
    return 0;
}