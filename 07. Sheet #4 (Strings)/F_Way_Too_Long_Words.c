#include<stdio.h>
int main() {
   int T;
   scanf("%d",&T);
   char str[100];
   for(int i=1;i<=T;i++){
    scanf("%s",&str);


        if(strlen(str)<=10){
        printf("%s\n",str);
    }
    else {
        printf("%c",str[0]);
        printf("%d",strlen(str)-2);
        printf("%c",str[strlen(str)-1]);
        printf("\n");
    }
   }
    return 0;
}