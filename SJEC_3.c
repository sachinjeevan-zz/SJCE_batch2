#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=2,b=8;
    printf("%d %d ",a,b);
    int c= 4*b+a;
        while(c<=n){
        printf("%d ",c);
        a=b;
        b=c;
        c=4*b+a;
    }
}