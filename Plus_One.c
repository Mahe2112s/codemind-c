#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s=0;
    for(i=0;i<n;i++)
    {
        s=s*10+arr[i];
    }
    ++s;
    int q[100],l=0,r,j;
    while(s>0)
    {
        r=s%10;
        s=s/10;
        q[l++]=r;
    }
    for(j=l-1;j>=0;j--)
    {
        printf("%d ",q[j]);
    }
    
}