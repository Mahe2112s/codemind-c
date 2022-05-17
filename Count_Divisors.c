#include<stdio.h>
int main()
{
    int i,r,k,j,c=0;
    scanf("%d%d%d",&i,&r,&k);
    for(j=i;j<=r;j++)
    {
        if(j%k==0)
        {
            c+=1;
        }
    }
    printf("%d",c);
}