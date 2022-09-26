#include<stdio.h>
#include<math.h>
int rev(int n)
{
    int r,d=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        d=d*10+r;
    }
    return d;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int s=a;
    int c=0,g=0,r;
    while(a>0)
    {
        r=a%10;
        a=a/10;
        c+=1;
        g=g*10+r;
        if(c==b)
        {
            break;
        }
    }
    int z=rev(g);
    int y=rev(s);
    int k=0,e,q=0;
    while(y>0)
    {
        e=y%10;
        y=y/10;
        k+=1;
        q=q*10+e;
        if(k==b)
        {
            break;
        }
    }
    //printf("%d",b);
    //printf("%d",q);
    int res=abs(z-q);
    printf("%d",res);
    
}