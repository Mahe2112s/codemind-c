#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<2)
    {
        return false;
    }
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a+b;
    for(int j=1;j<=100;j++)
    {
        if(prime(c+j))
        {
            printf("%d",j);
            break;
        }
    }
    
}