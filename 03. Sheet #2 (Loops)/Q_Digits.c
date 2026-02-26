#include<stdio.h>
int main() {
   int N,X;
   scanf("%d",&N);
   for(int i =1;i<=N;i++)
   {
            scanf("%d",&X);
            do{
                printf(" %d",X%10);
                X=X/10;
            }while(X!=0);
            printf("\n");
   }
    return 0;
}