#include<stdio.h>
int main()
{
    int s[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        if(s[i]%2==0)
        {
            if(i%2!=0)
            {
                printf("False");
                return 0;
        }    }
    }
    printf("True");
}