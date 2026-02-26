// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

#include<stdio.h>
int main() {
   char X;
   scanf("%c", &X);
   if('a'<=X && X<='z'){
       printf("%c",X-32);}
   else{
printf("%c",X+32);}
    return 0;
   }