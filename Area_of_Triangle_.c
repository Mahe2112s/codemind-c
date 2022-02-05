#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c,h;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    h=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",h);
}