#include<stdio.h>
int main()
{
    long long int a;
    scanf("%lld",&a);
    long long r,arr[100],l=0,c=0;
    while(a>0)
    {
        r=a%10;
        a=a/10;
        arr[l++]=r;
    }
    for(int i=l-1;i>=0;i--)
    {
        c++;
    }
    if(c==10 && arr[0]!=0){
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}