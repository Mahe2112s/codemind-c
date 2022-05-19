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
        s=s+arr[i];
    }
    int p=s/n;
    for(i=0;i<n;i++)
    {
        if(p==arr[i])
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
    
    
}