#include<stdio.h>

int main()
{
    int num = 12345 , digCount[10] = {0},nod=0,dig,count=0,ind;
    while(num)
    {
       dig = num % 10;
       digCount[dig]++;
       num = num/=10;
       nod++;
    }
    for( ind  = 0 ; ind <= 9 ; ind++)
      if( digCount[ind] % 2 !=0)
         count++;
	if( count >= nod/2)
	 printf("No");
	else
	  printf("Yes");

}
