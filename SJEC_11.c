#include<stdio.h>
int print(int index,int max,int dp[],int arr[]){
    if(max==0){
        return 0;
    }
    if(dp[index]==max){
        print(index-1,max-1,dp,arr);
        printf("%d ",arr[index]);
    }
    else{
        print(index-1,max,dp,arr);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int dp[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        dp[i]=1;
    }
    int max=1,index=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                if(dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                    if(dp[i]>max){
                        max=dp[i];
                        index=i;
                    }
                }
            }
        }
    }
for(int i=0;i<n;i++){
    printf("%d ",dp[i]);
}
printf("\n");
print(index,max,dp,arr);
}