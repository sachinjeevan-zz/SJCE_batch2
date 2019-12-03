#include<stdio.h>
#include<string.h>
int max(int a,int b){
    return a>b?a:b;
}
int dp[100][100];
int m,n;
int print(int row,int col,char str1[],char str2[]){
    if(row==0 || col==0){
        return 0;
    }
    else{
        if(str1[row-1]==str2[col-1]){
            print(row-1,col-1,str1,str2);
            printf("%c",str1[row-1]);
        }
        else{
            if(dp[row][col-1]>=dp[row-1][col]){
                print(row,col-1,str1,str2);
            }
            else{
                print(row-1,col,str1,str2);
            }
        }
    }
}
int main()
{
    char str1[1000];
    char str2[1000];
    scanf("%s",str1);
    scanf("%s",str2);
    m=strlen(str1);
    n=strlen(str2);
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else{
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
    }
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
print(m,n,str1,str2);
}