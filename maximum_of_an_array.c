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
        if(arr[i]>arr[s])
        {
            s=i;
        }
    }
    printf("%d",arr[s]);
    
}