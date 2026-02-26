#include<stdio.h>
int main() {
   int T,N;
   scanf("%d",&T);

   for (int i =1;i<=T;i++)
    {

        scanf("%d",&N);
        long long int fact=1;
        if(N==0){
        printf("1\n");
        continue;}
        for(int j=1;j<=N;j++)
        {

            fact=fact*j;
        }
        printf("%lld\n",fact);
    
    }
    return 0;
}