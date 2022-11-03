#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0,j;
    for(i=0;i<a;i++)
    {
        int s=0;
        for(j=i;j<a;j++)
        {
            s+=arr[j];
            if(s==b)
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
    
}