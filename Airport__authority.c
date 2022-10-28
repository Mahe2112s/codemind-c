#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b;
    scanf("%d",&b);
    int t=0;
    for(i=0;i<a;i++)
    {
        if(arr[i]<=b)
        {
            t++;
        }
        else
        {
            t+=2;
        }
    }
    printf("%d",t);
}