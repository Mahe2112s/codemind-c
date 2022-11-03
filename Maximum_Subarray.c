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
    int max=-10,j;
    for(i=0;i<a;i++)
    {
        int s=0;
        for(j=i;j<a;j++)
        {
            s+=arr[j];
            if(max<s)
            {
                max=s;
            }
        }
        
    }
    printf("%d",max);
}