#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=n,c=0;
    while(a>0)
    {
        a=a/10;
        c++;
    }
    int s=0,r;
    a=n;
    while(a>0)
    {
        r=a%10;
        s+=pow(r,c);
        a=a/10;
        c--;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}