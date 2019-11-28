#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    int start=0,end=n-1,flag=-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(key==arr[mid]){
            flag=mid;
            break;
        }
        else if(key>arr[mid]){
            start=mid+1;
            mid=(start+end)/2;
        }
        else{
            end=mid-1;
            mid=(start+end)/2;
        }
    }
    if(flag==-1){
        printf("Element is not found");
    }
    else{
        printf("%d is found at index %d",key,flag);
    }
}