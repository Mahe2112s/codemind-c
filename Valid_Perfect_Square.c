#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,i,c=0;
        scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
            if(a==i*i)
            {
                c=1;
            }
        }
        if(c==1)
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