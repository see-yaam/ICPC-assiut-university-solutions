#include<stdio.h>
int main() {
   int X;
   while(scanf("%d",&X)){

    if(X==1999){
        printf("Correct\n");
        break;
    }
    else {
        printf("Wrong\n");
        
    }
   }

    return 0;
}


#include<stdio.h>
int main() {
    int X;

    for( int; ; ){  
        scanf("%d", &X);

        if(X !=1999){
            printf("Wrong\n");
            
        }
        else{
            printf("Correct\n");
            break;
        }
    }

    return 0;
}
