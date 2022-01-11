#include<stdio.h>
int main()
{
    int a,b=2;
    scanf("%d%d",&a,&b);
    if(a%b == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}