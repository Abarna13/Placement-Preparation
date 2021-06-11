/*inpu
2 1
3 1
input1    dig   noOfOccur
58385      5     2
           3     1
           8     2
num            dig      givenDigit    newNum
58385385                  5              0
                5
5838538         8                        8
583853          3                         3*10+8 =38
58385           5
5838            8                      8 *100 + 38 =838
583             3                      3 *1000+ 838 = 3838
58              8                     8*10000+3838 = 83838
5               5
83838

1.

*/
isStable( int input);
#define YES 1
#define NO 0
#include<stdio.h>
int generateKey(int,int,int,int,int);
int main()
{
   int input1, input2 , input3 , input4 , input5,password;
   scanf("%d %d %d %d %d",&input1,&input2,&input3,&input4,&input5);
   password = generateKey(input1, input2,input3,input4,input5);
   printf("%d",password);
   return 0;
}
int generateKey( int input1, int input2 , int input3 , int input4 , int input5)
{
	int stableSum =0 , unStableSum =0;
	if( isStable(input1) == YES)
		stableSum += input1;
	else
		unStableSum += input1;

  	if( isStable(input2) == YES)
		stableSum += input2;
	else
		unStableSum += input2;

  	if( isStable(input3) == YES)
		stableSum += input3;
	else
		unStableSum += input3;

  	if( isStable(input4) == YES)
		stableSum += input4;
	else
		unStableSum += input4;

  	if( isStable(input5) == YES)
		stableSum += input5;
	else
		unStableSum += input5;
  	return stableSum - unStableSum;
}

int isStable( int num )  //123422343114
{

   	int currCount=0,prevCount =0, dig;
   	dig  = num % 10;
   	currCount = findFreq(num , dig);
   	num = deleteDigit(num,dig);
   	prevCount = currCount;
   	while( num )
	{
		dig = num % 10;//
		currCount =findFreq(num,dig);//
		if( currCount != prevCount)//
			 return NO;
		num = deleteDigit(num,dig);
		prevCount = currCount;
	}
	return YES;
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
