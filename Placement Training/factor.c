/*
32986
	num       factor
     86        2         86
     PQ+ R  = X
     2*6+       = 12 / 2 = 6  0
     4 * 3     = 12 / 4  = 3  0   4 * 3 + 0 = 12
     100       2   100 % 2 == 0   2
               3   100 % 3 == 0
               4   100 % 4 == 0   4
               5   100 % 5 == 0   5

       1     100
       2      50
       4      25
       5      20
       10
       2

       12
       1    12
       2     6  2 -> num / 2
       3     4
       100   10
        25   5
        36   6
		48   6
		12   3
		49   7
		55   7
		89   9
		120  10
		121  11
		100 10
		36  6
		25   5

*/


#include<stdio.h>
#include<math.h>
int main()
{
  int num , factor,sqt,count=0;
  num = 100;
 // printf("1 ");
  sqt = sqrt(num);
  for( factor = 2 ; factor <= sqt ; factor++)
     if( num % factor == 0 )
        count++;
       // printf("%d ", factor);
  //printf("%d",num);
  return 0;
}
