#include<stdio.h>
int reverse(int n)
{
    int r,p=0;
    while(n>0)
    {
        r=n%10;
        p=p*10+r;
        n=n/10;
    }
    return p;
}
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i==reverse(i))
        {
            printf("%d ",i);
        }
    }
}