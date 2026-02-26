// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    int A = X / 1000;
    if (A % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}