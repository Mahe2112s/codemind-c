#include<stdio.h>
int main( )
{
    int sum=0,pro=1,n;
    scanf("%d",&n);
    while(n>0)
    {
        sum+=n%10;
        pro*=n%10;
        n=n/10;
    }
    printf("%d",pro-sum);
}