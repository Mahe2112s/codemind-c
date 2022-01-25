#include<stdio.h>
int main()
{
    int m,n,s;//or s=0
    scanf("%d",&m);
    for(n=1;n<m;n++)
    {
        if(m%n==0)
        s=s+n;
    }
    if(s>m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
