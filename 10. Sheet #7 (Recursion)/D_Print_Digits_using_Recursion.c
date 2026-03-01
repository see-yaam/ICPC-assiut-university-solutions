//!   using string
/* 
#include<stdio.h>
int main() {
   int T;
   scanf("%d",&T);
   char str[10000];

for(int i=0;i<T;i++){
    scanf("%s",str);

    for(int j=0;str[j]!='\0';j++){
    printf("%c ",str[j]);
    }
    printf("\n");

}
    return 0;
}
 */



//! using recursion

//?    456%10=6
//?    456/10=45
//?    45%10=5
//?    45/10=4
//?    4%10=4
//?    4/10=0



#include<stdio.h>

void rec(int n){
    if(n==0){
        return;
    }
    int last=n%10;
    rec(n/10);
    printf("%d ",last);

}
int main() {
    int T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
int n;

        scanf("%d",&n);
        if(n==0){
    printf("0");
}
    
    rec(n);
    printf("\n");
    }
    return 0;
}


