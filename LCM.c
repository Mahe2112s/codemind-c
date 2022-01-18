#include<stdio.h>
int main ()
{
	int a,b,i,c,x,y;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		x=a;
		y=b;	
	}
	else
	{
		x=b;
		y=a;
	}
	for(i=1;i<=y;i++)
	{
		c=x*i;
		if(c%y==0)
		{
			printf("%d ",c);
			break;
		} 
		
	}
}