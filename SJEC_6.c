#include<stdio.h>
#include<string.h>
int max(int a,int b){
    return a>b?a:b;
}
int main()
{
    char str[1000];
    scanf("%s",str);
    int len = strlen(str);
    int dp[len][len];
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            dp[i][j]=0;
            if(i==j){
                dp[i][j]=1;
            }
        }
    }
    int i=0,j,k=1;
    while(1){
        i=0;
        j=k;
        if(i==0 && j==len){
            break;
        }
        while(j<len){
            if(j-i==1){
                if(str[i]==str[j]){
                    dp[i][j]=2;
                }
                else{
                    dp[i][j]=1;
                }
            }
            else{
                if(str[i]==str[j]){
                    dp[i][j]=dp[i+1][j-1]+2;
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
                }
            }
            i++;
            j++;
        }
        k++;
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
}