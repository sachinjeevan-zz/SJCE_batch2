#include<stdio.h>
int binary_search(int l,int r,int arr[],int key){
    int mid=(l+r)/2;
    while(r-l>1){
        if(key>arr[mid]){
            l=mid;
        }
        else{
            r=mid;
        }
        mid=(l+r)/2;
    }
    return r;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int dp[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    dp[0]=arr[0];
    int k=1;
    for(int i=1;i<n;i++){
        if(arr[i]<dp[0]){
            dp[0]=arr[i];
        }
        if(arr[i]>dp[k-1]){
            dp[k]=arr[i];
            k++;
        }
        else{
            int index=binary_search(0,k-1,arr,arr[i]);
            dp[index]=arr[i];
        }
    }
    printf("%d",k);
}