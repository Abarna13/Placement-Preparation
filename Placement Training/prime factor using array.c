#include<stdio.h>
#include<math.h>
//int primeNumber[]
int primeNumber[10000000];
int main()
{
  int num =10000000, factors,genNum,sqr,max;
  int nop=0,primeInd;
  primeNumber[0] = 2;
  nop=1;
  scanf("%d",&num);
  for( genNum = 3 ; genNum <= num ; genNum+=2)
  {
  	 sqr = sqrt(genNum);
  	 for( primeInd = 0 ; primeNumber[primeInd] <= sqr ; primeInd++)
		if( genNum % primeNumber[primeInd] == 0)
		   break;
	 if( primeNumber[primeInd] > sqr)
		primeNumber[nop++]= genNum;
  }
  max=0;
  printf("Out");
  for( primeInd = 0 ; num > 1 && primeInd < nop; primeInd++)
  {
  	  while( num > 1 && (num % primeNumber[primeInd] == 0 ))
	  {
	  	num/=primeNumber[primeInd];
	  	if( max < primeNumber[primeInd]) max = primeNumber[primeInd];
	  	printf("%d ", primeNumber[primeInd]);
	  }

  }
  //for( primeInd = 0 ; primeInd < nop ; primeInd++)
	// printf("%d ", primeNumber[primeInd]);
	printf("\nMax :%d",max);
  return 0;

}
