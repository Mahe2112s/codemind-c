#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2;i*i<=n;i++)
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
    int a,b;
    scanf("%d%d",&a,&b);
    int c=0,i;
    for(i=a;i<=b;i++)
    {
        if(prime(i))
        {
            c++;
        }
    }
    printf("%d",c);
}