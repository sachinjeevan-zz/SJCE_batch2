#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        arr[i]=i+2;
    }
    int limit=sqrt(n);
    for(int i=0;arr[i]<=limit;i++){
        if(arr[i]!=0){
            for(int j=i+arr[i];j<n-1;j+=arr[i]){
                arr[j]=0;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]!=0){
            printf("%d ",arr[i]);
        }
    }

}