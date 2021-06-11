#include<stdio.h>
int main()
{
    int noOfBaskets , ind,sum=0,avg;
    scanf("%d",&noOfBaskets);
    int apples[noOfBaskets];
    for( ind =0 ; ind < noOfBaskets ; ind++ )
		scanf("%d",&apples[ind]);
	for( ind =0  ; ind < noOfBaskets ; ind++)
		 sum = sum + apples[ind];
	avg = sum / noOfBaskets;
	sum = 0;
	for( ind =0 ; ind < noOfBaskets ; ind++)
		if( apples[ind] > avg)
		  sum = sum + apples[ind] - avg;
  printf("%d",sum);
 return 0;
}
