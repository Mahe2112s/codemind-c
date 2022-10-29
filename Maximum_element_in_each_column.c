#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c],i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
   
    for(i=0;i<c;i++)
    {
         int max=0;
        for(j=0;j<r;j++)
        {
            if(max<arr[j][i])
            {
                max=arr[j][i];
            }
        }
        printf("%d
",max);
    }
}