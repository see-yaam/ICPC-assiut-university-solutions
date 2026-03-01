#include<stdio.h>
int max_number(int arr[],int n,int i){
    if(i==n-1){
        return arr[i];
    }

    int max = max_number(arr, n, i+1);  

    if(arr[i] > max){
        return arr[i];
    } else {
        return max;
    }

}

int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int ans=max_number(arr,n,0);
printf("%d",ans);
    return 0;
}




/* array ke boro khujbo
1 2 3 4 5






 */