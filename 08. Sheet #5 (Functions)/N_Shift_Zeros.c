/* #include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

// 2 ta loop lagbe cz ekbar swap korlei 0 last e jabe na 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
        if(arr[j]==0){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}


    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }



    return 0;
} */



//! using function


#include <stdio.h>

void shift_zero(int arr[],int n,int i){

// 2 ta loop lagbe cz ekbar swap korlei 0 last e jabe na 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
        if(arr[j]==0){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}


    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }


}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    shift_zero(arr,n,0);





    return 0;
}