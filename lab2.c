#include<stdio.h>

int main()
{
	int n = 0 , s = 0 , c = 0 , t = 0; // n for number, s for square, c for cube, t for total
	printf("n s c t\n");
	 
       while( n <= 100)
       {
	       printf("%d %d %d %d\n",n,s,c,t);
	       n = n + 1 ;
	       s = n * n ;
	       c = n * n * n ;
	       t= n + s + c ;
       }	  
	
	return 0;
}

