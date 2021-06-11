/*num               base    exp     find the powe(5,8)   sum
582109/100000       5     8
82109/10000         8
2109/1000                 2        powe(8,2)
                    2
109/100                   1        powe(2,1)
09/10               1     0        powe(1,0)
9                   0     9        powe(0,9)
                    9              powe(9,0)

1234/1000          1
234/100                   2         powe(1,2) 1         1
34/10              2      3         powe(2,3)8          9
4                  3      4         powe(3,4)81         90
0                  4      0        power(4,0)1           91
*/
/*

1234               4      0       4,0   1              1
123                3      4       3,4   81              82
12                 2      3       2,3    8              90
1                  1      2       1,2    1               91

*/

#include<stdio.h>
long long int power( int base , int expo);
long long int findDivisor( long long int num );
int main()
{
    long long int num = 1234,divisor;
    int sum=0,base,expo;
    divisor = findDivisor(num);
    base = num/divisor; //582109/100000 5
    num = num % divisor;//582109%100000  82109
    divisor/=10;//10000
    while(num)
   {
   	expo = num/divisor;// 9/1  9
    sum += power(base,expo);//0 9
     base = expo;//9
    num %= divisor;// 9%1 0
    divisor /= 10; //0
   }
   sum += 1;
   printf("%d",sum);
    return 0;
}
long long int findDivisor( long long int num )
{
	long long int divisor =1;
	while( num )
	{
		num/=10;
		divisor *=10;
	}
	return divisor/10;
}
long long int power( int base , int expo)
{
	long long int res =1;
	int ctr;
	for( ctr = 1 ; ctr <= expo ; ctr++ )
		  res = res * base;
	return res;
}
