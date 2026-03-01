#include <stdio.h>
int main()
{
    int w, h, T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d %d", &w, &h);
        if (h == w)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}