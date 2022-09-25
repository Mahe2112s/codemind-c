#include<stdio.h>
int sqr(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n==i*i)
        {
            c=1;
        }
    }
    if(c==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],j;
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    int s=0;
    for(j=0;j<n;j++)
    {
        if(sqr(arr[j]))
        {
            s+=arr[j];
        }
    }
    printf("%d",s);
}