#include<stdio.h>

int rec(char str[],int i){
    if(str[i]=='\0'){
        return 0;
    }
    int count=rec(str,i+1);
    // just ekta condition jekhane vower holei 1 increase kore count return kobo...else e bower na hole count increase na korei return korbo
    if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'|| str[i]=='O' || str[i]=='U' ){
    return count+1;
    }
    else{
        return count;
    }
}
int main() {
   char str[201];
   fgets(str,201,stdin);
   int ans=rec(str,0);
   printf("%d",ans);
    return 0;
}