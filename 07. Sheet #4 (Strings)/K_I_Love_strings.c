



#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        char S[51],T[51];
        scanf("%s", &S);
        scanf("%s", &T);

        int lenS=strlen(S);
        int lenT=strlen(T);
        int lenmax;
        if(lenS>lenT){
            lenmax=lenS;
        }
        else{
            lenmax=lenT;
        }

        for(int i=0;i<lenmax;i++){
            if(i < lenS) {
                printf("%c", S[i]);
            }

            if(i < lenT) {
                printf("%c", T[i]);
            }

        }
        printf("\n");
    }


}