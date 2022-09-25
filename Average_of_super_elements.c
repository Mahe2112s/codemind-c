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
    int q[100];
    int l=0,j;
    q[l]=arr[0];
    for(i=0;i<n;i++)
    {
        int  m=0;
        for(j=0;j<l;j++)
        {
            if(q[j]==arr[i])
            {
                m++;
            }
        }
         if(m==0)
        {
           q[l++]=arr[i];     
         }
    }
    int f=0,s=0;
    for(j=0;j<l;j++)
    {
       int c=0;
       for(i=0;i<n;i++)
        {
           if(q[j]==arr[i])
           {
               c++;
           }
        }
        if(c==q[j])
        {
            f+=q[j];
            s++;
        }
    }
    if(s==0)
    {
        printf("-1");
    }
    else
    {
         float avg=(float)f/s;
    printf("%.2f",avg);
    }
  
}