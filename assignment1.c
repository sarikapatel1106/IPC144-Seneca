
/*
"I declare that the attached assignment is wholly my own work in accordance 
with Seneca Academic Policy. No part of this assignment has been copied
manually or electronically from any other source (including web sites) or
distributed to other students."

*/

#include<stdio.h>

int main()
{
   float num,g;
   int a,b,c,d,e,f,i,h;

   printf("Welcome to the IPC144 Cheque Generator...\n");
   printf("Enter a monetary value from $0.01 to $9999.99 inclusive: ");
   scanf("%f",&num);

   if(num>=0.01F && num<=9999.99F)
   {
      printf("PAY TO THE ORDER OF... Sarika Patel \n");
      
      a=num/1000;
      b=num-(a*1000);
      c=b/100;
      d=b-(c*100);
      e=d%10;
      f=d-e;
	
   // for floating point 
      g=num+0.005;
      i=g*100;
      h=i%100;

      switch(a)
      {
	 case 1:
		  printf("One Thousand ");
		  break;
	 case 2:
		  printf("Two Thousand ");
		  break;
	 case 3:
		  printf("Three Thousand ");
		  break;
	 case 4:
		  printf("Four Thousand ");
		  break;
	 case 5:
		  printf("Five Thousand ");
		  break;
	 case 6:
		  printf("Six Thousand ");
		  break;
	 case 7:
		  printf("Seven Thousand ");
		  break;
	 case 8:
		  printf("Eight Thousand ");
		  break;
	 case 9:
		  printf("Nine Thousand ");
		  break;
      }

      switch(c)
      {
	 case 1:
		  printf("One Hundred ");
		  break;
	 case 2:
		  printf("Two Hundred ");
		  break;
	 case 3:
		  printf("Three Hundred ");
		  break;
	 case 4:
		  printf("Four Hundred ");
		  break;
	 case 5:
		  printf("Five Hundred ");
		  break;
	 case 6:
		  printf("Six Hundred ");
		  break;
	 case 7:
		  printf("Seven Hundred ");
		  break;
	 case 8:
		  printf("Eight Hundred ");
		  break;
	 case 9:
		  printf("Nine Hundred ");
		  break;
     }
  
     if(f>=20 && f<=90)
     {
   
	switch(f)
	{
	   case 20:
		     printf("Twenty ");
		     break;
	   case 30:
		     printf("Thirty ");
		     break;
	   case 40:
		     printf("Fourty ");
		     break;
	   case 50:
		     printf("Fifty ");
		     break;
	   case 60:
		     printf("Sixty ");
		     break;
	   case 70:
		     printf("Seventy ");
		     break;
	   case 80:
		     printf("Eighty ");
		     break;
	   case 90: 
		     printf("Ninety ");
		     break;
	}

	switch(e)
	{
	   case 1:
		    printf("One ");
		    break;
	   case 2:
		    printf("Two ");
		    break;
	   case 3:
		    printf("Three ");
		    break;
	   case 4:
		    printf("Four ");
		    break;
	   case 5:
		    printf("Five ");
		    break;
	   case 6:
		    printf("Six ");
		    break;
	   case 7:
		    printf("Seven ");
		    break;
	   case 8:
		    printf("Eight ");
		    break;
	   case 9:
		    printf("Nine ");
		    break;
	}

     } 

     switch(d)
     {
	case 10:
		  printf("Ten ");
		  break;
	case 11:
		  printf("Eleven ");
		  break;
	case 12:                      
		  printf("Twelve ");
		  break;
	case 13:
		  printf("Thirteen ");
		  break;
	case 14:         
		  printf("Fourteen ");
		  break;
	case 15:
		  printf("Fifteen ");
		  break;
	case 16: 
		  printf("Sixteen ");
		  break;
	case 17:   
		  printf("Seventeen ");
		  break;
	case 18:
		  printf("Eighteen ");
		  break;
	case 19:
		  printf("Nineteen ");
		  break;
     }
    

     if(d!=0 && f==0)
     {

	switch(e)
	{
	   case 1:
		    printf("One ");
		    break;
	   case 2:
		    printf("Two ");
		    break;
	   case 3:
		    printf("Three ");
		    break;
	   case 4:
		    printf("Four ");
		    break;
	   case 5:
		    printf("Five ");
		    break;
	   case 6:
		    printf("Six ");
		    break;
	   case 7:
		    printf("Seven ");
		    break;
	   case 8:
		    printf("Eight ");
		    break;
	   case 9:
		    printf("Nine ");
		    break;
	}

     }

     if(e==0 && a==0 && c==0)
     {
	printf("Zero ");
     }

   printf("Dollars and ... %.2d Cents\n",h);
   }

   else
   {
      printf("Sorry, cannot create cheque for that amount, try again next time!\n");
   }
   printf("Thank you\n");
   return 0;

}           
