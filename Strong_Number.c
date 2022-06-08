#include<stdio.h>
int fact(int n)
{
    int p=1,i;
    for(i=1;i<=n;i++)
    {
        p=p*i;
    }
    return p;
}
int main()
{
    int a,d=0,r;
    scanf("%d",&a);
    int b=a;
    while(b>0)
    {
        r=b%10;
        b=b/10;
        d=d+fact(r);
    }
    if(d==a)
    {
        printf("The number %d is a strong number",a);
    }
    else
    {
        printf("The number %d is not a strong number",a);
    }
}