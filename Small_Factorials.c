#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    int a,p=1,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
      p=p*i; 
    }
    printf("%d
",p);
    }
}