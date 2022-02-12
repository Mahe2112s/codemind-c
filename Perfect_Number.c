#include<stdio.h>
int main()
{
    int n,i,sum=0,a;
    scanf("%d",&n);
    a=n;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)     
        {
          sum=sum+i;  
        }
    }
    if(sum==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}