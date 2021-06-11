/*(()))(

-1


-1

2*/

#include<stdio.h>
int main()
{
   char input[] = "())))((()" ;
   int balanced = 0 , count=0,ind;
   for( ind = 0 ; input[ind]!= '\0' ; ind++)
   {
      if( input[ind] == '(')
        balanced++;
	  else
	  {
	     balanced--;
	     count++;
	     if( balanced < 0)
	       break;
	  }
   }
   if( balanced == 0)
     printf("%d",count);
   else
     printf("-1");
 return 0;
}
