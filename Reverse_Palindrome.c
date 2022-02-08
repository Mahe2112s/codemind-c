#include<stdio.h>
int reverse(int n)
{
    int r,p=0,sum;
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
    int x;
    scanf("%d",&x);
    do
    {
        x=x+reverse(x);
    }while(x!=reverse(x));
    printf("%d",x);
}
