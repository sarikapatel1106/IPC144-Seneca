#include<stdio.h>
int main()
{
	int x=9876;
	int a,b,c,d;
		
	printf("%d\n",x);
	a=x/1000;
	if (a%2==0)
	{	
		printf("%d is EVEN\n",a);
	}
	else 
	{
		printf("%d is ODD\n",a);
	}
	b=(x%1000)/100;
	if (b%2==0)
	{ 
		printf("%d is EVEN\n",b);
	}
	else
	{
		printf("%d is ODD\n",b);
	}
	c=((x%1000)%100)/10;
	if (c%2==0)
	{
		printf("%d is EVEN\n",c);
	}
	else
	{
		printf("%d is ODD\n",c);
	}
	d=(((x%1000)%100)%10);
	if (d%2==0)
	{
		printf("%d is EVEN\n",d);
	}
	else
	{
		printf("%d is ODD\n",d);
	}
	return 0;
}