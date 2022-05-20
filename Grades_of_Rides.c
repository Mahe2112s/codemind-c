#include<stdio.h>
int main()
{
   int h,s,f;
   scanf("%d%d%d",&h,&s,&f);
   if(h>50 && s>60 && f>100)
   {
       printf("10");
   }
   else if(h>50 && s>60)
   {
       printf("9");
   }
   else if(f>100 && s>60)
   {
       printf("8");
   }
   else if(h>50 && f>100)
   {
       printf("7");
   }
   else if(h>50 || s>60 || f>100)
   {
       printf("6");
   }
   else
   {
       printf("5");
   }
    
}