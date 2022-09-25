#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i;
    if(n<2)
    {
        return false;
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a;
    scanf("%d",&a);
    int d=(int)log10(a)+1;
    int r,c;
   // printf("%d",d);
    if(prime(a))
    {
        int s=0;
        while(a>0)
        {
            r=a%10;
            a=a/10;
            if(prime(r))
            {
                  s++;
            }
            else
            {
                printf("Not Mega Prime");
                break;
            }
        }
        if(s==d)
        {
            printf("Mega Prime");
        }
        
    }
    else
    {
        printf("Not Mega Prime");
    }
    //printf("%d",c);
    
}