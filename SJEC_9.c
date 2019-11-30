#include<stdio.h>
int min(int a,int b,int c){
    if(a<=b && a<=c){
        return a;
    }
    else if(b<=a && b<=c){
        return b;
    }
    else{
        return c;
    }
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
    int duplicate[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0){
                duplicate[i][j]=mat[i][j];
            }
            else{
                if(mat[i][j]==0){
                    duplicate[i][j]=0;
                }
                else{
                    duplicate[i][j]=min(duplicate[i][j-1],duplicate[i-1][j-1],duplicate[i-1][j])+1;
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",duplicate[i][j]);
        }
        printf("\n");
    }

}