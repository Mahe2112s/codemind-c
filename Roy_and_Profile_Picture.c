#include<stdio.h>
int main()
{
    int l,n,i;
    scanf("%d%d",&l,&n);
    for(i=1;i<=n;i++)
    {
        int w,h;
        scanf("%d%d",&w,&h);
        if(w<l || h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(w==h)
        {
            printf("ACCEPTED
");
        }
        else if(w<h || w>h)
        {
            printf("CROP IT
");
        }
    }
    
}