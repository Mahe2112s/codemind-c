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
    int c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            c++;
        }
    }
    if(c<=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}