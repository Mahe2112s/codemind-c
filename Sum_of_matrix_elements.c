#include<stdio.h>
int main()
{
    int n,m,s=0;
    scanf("%d%d",&n,&m);
    int arr[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          s=s+arr[i][j];  
        }
    }
    printf("%d",s);
}