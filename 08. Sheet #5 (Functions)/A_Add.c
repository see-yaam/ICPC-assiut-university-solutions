#include<stdio.h>

int sum(int a,int b){
    int summation=a+b;
    return summation;


}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int summation= sum(a,b);
    printf("%d", summation);

   
    return 0;
}