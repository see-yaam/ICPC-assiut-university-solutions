#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
   char str[n];
   scanf("%s",str);
int sum=0;
for(int i=0;str[i]!='\0';i++){
    sum=sum+str[i]-'0';
}

   printf("%d",sum);

    return 0;
}