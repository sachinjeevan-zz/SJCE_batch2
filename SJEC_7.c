#include<stdio.h>
int min(int a,int b){
    return a<b?a:b;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int dup[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j==0){
                dup[i][j]=mat[i][j];
            }
            else if(i==0){
                dup[i][j]=dup[i][j-1]+mat[i][j];
            }
            else if(j==0){
                dup[i][j]=dup[i-1][j]+mat[i][j];
            }
            else{
                dup[i][j]=min(dup[i-1][j],dup[i][j-1])+mat[i][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",dup[i][j]);
        }
        printf("\n");
    }
}