#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int q[100];
    int l=0;
    q[l]=a[0];
    for(i=0;i<n;i++)
    {
        int k=0;
        for(int j=0;j<l;j++)
        {
            if(a[i]==q[j])
            {
                k++;
            }
        }
        if(k==0)
        {
            q[l++]=a[i];
        }
    }
    for(int j=0;j<l;j++)
    {
       int c=0;
       for(int i=0;i<n;i++)
       {
           if(q[j]==a[i])
           {
               c++;
           }
       }
       if(c==2)
       {
           printf("%d",q[j]);
       }
    }
}