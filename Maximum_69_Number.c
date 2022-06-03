#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=0,r,d=0,f,l=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        d=d*10+r;
    }
    while(d!=0)
    {
        f=d%10;
        d=d/10;
        if(f==6 && s==0)
        {
            f=9;
            s++;
        }
        l=l*10+f;
    }
    printf("%d",l);
}