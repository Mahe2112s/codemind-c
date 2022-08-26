#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,c=0;
    scanf("%d",&a);
    int i,j;
    for(i=0;i<=a;i++)
    {
        for(j=0;j<=a;j++)
        {
         if(i*j==a)
         {
             if(prime(i) &&  prime(j))
             {
                 printf("%d ",i);
                 c++;
             }
         }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}