#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i;
    scanf("%d%d%d",&a,&b,&c);
    int s=pow(a,b);
    i=s%c;
    printf("%d",i);
}