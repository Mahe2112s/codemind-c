#include<stdio.h>
int main()
{
    int l,b,w,c,s,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l<=w+w || b<=w+w)
    {
    printf("Impossible");
    }
    else
    {
    a=l*b-((l-2*w)*(b-2*w));
    s=a*c;
    printf("%d",s);
    }
}