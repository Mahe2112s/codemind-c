#include<stdio.h>
int main()
{
    int n,s,r,d=0,f,m,g=0;
    scanf("%d",&n);
    s=n*n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        d=d*10+r;
    }
    f=d*d;
    while(f>0)
    {
     m=f%10;
     f=f/10;
     g=g*10+m;
    }
    if(s==g)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}