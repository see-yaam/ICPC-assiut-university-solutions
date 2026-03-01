#include<stdio.h>
void one_to_n(int n){
    for(int i=1;i<=n;i++){
        if(i!=n){
        printf("%d ",i);
        }
        else{
            printf("%d",i);
        }
    }
}

int main() {
    int n;
    scanf("%d",&n);
    one_to_n(n);

    

   
    return 0;
}