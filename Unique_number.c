#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[1000],c=0,r,f=0;
    int i,j;
    while(n!=0)
    {
        r=n%10;
        arr[c]=r;
        n=n/10;
        c++;
    }
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(arr[i]==arr[j])
            {
                f=1;
            }
        }
    }
    if(f==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}