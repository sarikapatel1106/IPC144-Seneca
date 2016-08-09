#include<stdio.h>
int main()
{
	int x,a,b,c,d;
	do
	{
		printf("Please enter a four digit numeric value : ");
		scanf("%d",&x);
		
		if(x > 9999 || x < 1000)
		{
			printf("Sorry! You have not entered a four digit numeric value.. Please try again..\n");
		}
	}while(x > 9999 || x < 1000);
	
	//printf("%d\n",x);
	
	a = x/1000; // first integer 
	
	if(a%2==0)
	{	
		printf("%d is even number\n",a);
	}
	else 
	{
		printf("%d is odd number\n",a);
	}
	
	b = (x%1000)/100; // second integer 
	
	if(b%2==0)
	{ 
		printf("%d is even number\n",b);
	}
	else
	{
		printf("%d is odd number\n",b);
	}
	
	c = ((x%1000)%100)/10; // third integer 
	
	if(c%2==0)
	{
		printf("%d is even number\n",c);
	}
	else
	{
		printf("%d is odd number\n",c);
	}
	
	d = (((x%1000)%100)%10); // fourth integer
	
	if(d%2==0)
	{
		printf("%d is even number\n",d);
	}
	else
	{
		printf("%d is odd number\n",d);
	}
	return 0;
}