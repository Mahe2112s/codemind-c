#include<stdio.h>
int main()
{
    float area,radius,pi;
    scanf("%f", & radius);
    pi=3.14; 
    area = pi * radius * radius;
    printf("%.2f",area);
}