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
    double p;
    p=double(s)/n;
    printf("%.2f",p);
    
}