#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    printf("
");
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=n;j++)
        {
            if(i==j or j>=i)
            {
                printf("%d ",j);
            }
        }
        printf("
");
    }
}