/*num   k     power
9     3     1
      3      9
      2     81
	  1   243
*/
#include<stdio.h>
int main()
{
   int num , k , power=1 , dig;
   scanf("%d %d", &num , &k);
   //for( ; k > 0 ; k-- )
	 //power = num * power;
	 power = (int)pow(num,k);
  dig = power % 10;
  printf("%d", dig);
  return 0;
}
