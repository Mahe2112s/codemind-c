#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int e=0,o=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            e+=arr[i];
        }
        else
        {
            o+=arr[i];
        }
    }
    int d=abs(e-o);
    if(d%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}