#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j or j==1 or (i+j==n+j))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}