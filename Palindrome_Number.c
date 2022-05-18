#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,d=0,r;
        scanf("%d",&a);
        int b=a;
        while(a!=0)
        {
            r=a%10;
            a=a/10;
            d=d*10+r;
        }
        if(d==b)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        
    }
}