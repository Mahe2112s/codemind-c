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
    int se,c=0;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            if(c<arr[i])
            {
                c=arr[i];
            }
        }
    }
    printf("%d",c);
    
    
}