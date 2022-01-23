#include<stdio.h>
int main()
{
    int n,sq,s=0,i;
    scanf("%d",&n);
    sq=n*n;
    for(i=sq;i>0;i=i/10)
    {
        s=s+(i%10);
    }
    if(s==n)
    {
        printf("Neon Number",s);
    }
    else
    {
        printf("Not Neon Number",s);
    }
}