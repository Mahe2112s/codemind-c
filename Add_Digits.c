#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n>9)
    {
        sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    n=sum;
    }
    printf("%d",sum);
}