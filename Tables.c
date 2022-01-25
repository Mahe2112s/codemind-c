#include<stdio.h>
int main()
{
    int a,b,i,c;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        c=a*i;
        printf("%d x %d = %d
",a,i,c);
    }
}