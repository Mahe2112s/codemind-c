#include<stdio.h>
int self(int n)
{
    int a,r,f,c=0,d=0;
    a=n;
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        c++;
    }
    int z=n;
    while(n!=0)
    {
       f=n%10;
       n=n/10;
       if(f==0)
       {
           continue;
       }
       if(z%f==0)
       {
           d++;
       }
    }
    if(d==c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(self(i))
        {
            printf("%d ",i);
        }
    }
}
