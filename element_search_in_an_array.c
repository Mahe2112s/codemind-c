#include<stdio.h>
int search(int *arr,int n,int s)
{
    int static x=0;
    if(arr[x]==s)
    {
        return 1;
    }
    else if(x==n-1)
    {
        return 0;
    }
    x++;
    search(arr,n,s);
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
    int s;
    scanf("%d",&s);
    if(search(arr,n,s))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}