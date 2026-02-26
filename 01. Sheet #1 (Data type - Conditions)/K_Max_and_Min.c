// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include<stdio.h>
int main() {
   int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A>=B && A>=C){
                if(B>=C){
            printf("%d ",C);
        }else{
            printf("%d ",B);
        }
        printf("%d",A);

    }

       else if(B>=A && B>=C){
                if(A>=C){
            printf("%d ",C);
        }else{
            printf("%d ",A);
        }
        printf("%d",B);

    }


        else {
                    if(A>=B){
            printf("%d ",B);
        }else{
            printf("%d ",A);
        }
        printf("%d",C);

    }
    return 0;
}