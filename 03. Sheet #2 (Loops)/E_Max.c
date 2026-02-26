#include<stdio.h>
int main() {
    int N,X;
    int max=0;
   scanf("%d",&N);
   for(int i=1;i<=N;i++){
    scanf("%d",&X);
    if (X>max){
        max=X;
    }
   }
   printf("%d",max);
    return 0;
}