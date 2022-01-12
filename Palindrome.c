#include<stdio.h>
int main()
{
    int n,b,r=0,h;
    scanf("%d",&n);
    b=n;
    while(n>0)
    {
      h=n%10;
      r=r*10+h;
      n=n/10;
    }
    if(b == r)
      {
          printf("True");
      }
      else
      {
    printf("False");
      }
}