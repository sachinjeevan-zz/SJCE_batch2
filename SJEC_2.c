#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag=1;
    if(n>3 && (n%2==0 || n%3==0)){
        flag=0;
    }
    int limit=sqrt(n);
    int k=1;
    int a=6*k+1;
    int b=6*k-1;
    while(flag==1 && (a<=limit || b<=limit)){
        if(n%a==0 || n%b==0){
            flag=0;
        }
        k++;
        a=6*k+1;
        b=6*k-1;
    }
    if(flag==1){
        printf("Prime");
    }
    else{
        printf("Not a Prime");
    }
}