#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a;
    scanf("%d",&a);
    int j,c=0;
    for(j=1;j<=a;j++)
    {
        if(a%j==0)
        {
            if(prime(j))
            {
                continue;
            }
            else
            {
                c++;
            }
        }
    }
    printf("%d",c);
}