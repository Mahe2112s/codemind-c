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
    int b;
    scanf("%d",&b);
    int max=0;
    for(i=0;i<a;i++)
    {
       if(max<arr[i])
       {
           max=arr[i];
       }
    }
    //printf("%d",max)
    int s=0;
    for(i=0;i<a;i++)
    {
      s+=(arr[i]+b);
      if(s>=max)
      {
          printf("True ");
      }
      else
      {
          printf("False ");
      }
      s=0;
    }
}