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
int findDivisor(int num);
int main()
{
   int num = 100002339,dig,divisor,count=0,safe;
safe = num;

   while( num )
   {
         dig = num %10;//9/10 0
          if( findFreq(safe,dig)==1)
				  count++;
		  num = deleteDigit(num,dig);
   }
    printf("%d",count);
    return 0;
}
int findDivisor(  int num )
{
	 int divisor =1;
	while( num )
	{
		num/=10;
		divisor *=10;
	}
	return divisor/10;
}



int findFreq( int num , int givenDig)
{
	int count =0,dig;
	while( num )//5   5 0!=0
	{
		dig = num % 10; //5
		if( dig == givenDig) //5== 5
			count++;//2
		num = num / 10;//0
	}
	return count;
}


int deleteDigit( int num , int givenDigit )
{
    int newNum = 0, multiplier=1,dig;
    while( num )
	{
		dig = num % 10;
   		num/=10;
		if( dig == givenDigit) continue;
		else{
			newNum = newNum + dig * multiplier;
			multiplier *=10;
		}
	}
   return newNum;
}
