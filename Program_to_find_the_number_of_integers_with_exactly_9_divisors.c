#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,c=0,s=9,l=0;
    for(i=1;i<=a;i++)
    {
        int c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==s)
        {
            l++;
        }
        if(l>0 & c==s)
        {
            printf("%d ",i);
        }
    }
    printf("
Total=%d",l);
 
}