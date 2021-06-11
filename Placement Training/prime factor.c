/*
  num     factor     count 1 number
  10001    2 < 100    0
  10000000007
  1 -> 10000000007

  1 to num -> no of factors 2
  2 to sqrt -> 0
  prime numbers
  1000000
  num % 2 == 0

  15 -> 1 3 5
  25 -> 1 5
  27 -> 1 3 9
  27 % 2
  2 4 6 8 10
  3 5 7 9 11 13 15 17 19 21 25 27 29 31 33 35 37 39 41
  3 5 7 9 11 13  17 19 29 31 37 41
  59 -> 2
  3 5 7


  num
  129   2
        3    3
  43    3
        5
        7
        9
        11 13 15
        3 * 43

32988   2        2
16494   2     2
 82472
 2749   3     3
        5
        2749

  32400  2    2
  16200  2     2
  8100   2   2
  4050  2
  2025   2
         3
   675         3
         3
	225         3
	     3
	 75         3
	      3
	  25  3     3
	      5
		5
*/

#include<stdio.h>

int main()
{
    int num = 32400 *7*15, factor = 2;
    while( num % factor == 0)
    {
       printf("%d ", factor);
       num/= factor;
    }
 //   printf("%d ", num);
 for( factor = 3 ; num > 1  ; )
 {
 	if( num % factor == 0)
	{
		num/= factor;
		printf("%d ", factor);
	}
	else
		 factor+=2;

 }
}
