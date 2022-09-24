#include<stdio.h>
int rev(int n)
{
    int r,d=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        d++;
    }
    if(d%2==0)
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
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(i=0;i<n;i++)
    {
        if(rev(arr[i]))
        {
            c++;
            
        }
    }
    printf("%d",c);
}