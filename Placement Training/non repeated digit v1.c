/*
5   5    1



2
543000002  10000000
43000002   1000000
3000002    100000
2          10000

*/


#include<stdio.h>
int findFreq( int num , int givenDig);
int deleteDigit(int num , int givenDig);
int findDivisor(int num); // 7667550544
int main()
{
   int num = 1000023391,dig,divisor,count=0;
   int digCount[10]={0};
   4 2 1 2 0 0 0 0 0 1
   0 1 2 3 4 5 6 7 8 9
   while( num )
   {
   	   dig = num % 10;1
   	   digCount[dig]++;digCount[1]
   	   num  = num/10;1
   }
  for( ctr = 0 ; ctr < 10 ; ctr++)
	if( digCount[ctr]==1)
	  count++;
  printf("%d",count);

   return 0;
}
