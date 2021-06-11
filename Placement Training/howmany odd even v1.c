#include<stdio.h>
int howmany_oddEven( int,int,int,int,int,char []);
int main()
{
   int inp1, inp2 , inp3 , inp4 , inp5;
   char option[5];
   scanf("%d %d %d %d %d %s",&inp1,&inp2,&inp3,&inp4,&inp5,option);
   printf("%d",howmany_oddEven( inp1,inp2,inp3,inp4,inp5,option));
   return 0;
}

int howmany_oddEven( int inp1 , int inp2 , int inp3 , int inp4 , int inp5 , char option[])
{
	int evenCount =0 , oddCount =0;
	if( inp1 % 2 == 0) evenCount++;
	else oddCount++;
	if( inp2 % 2 == 0) evenCount++;
	else oddCount++;
	if( inp3 % 2 == 0) evenCount++;
	else oddCount++;
	if( inp4 % 2 == 0) evenCount++;
	else oddCount++;
	if( inp5 % 2 == 0) evenCount++;
	else oddCount++;
	if( strcmp( option , "Even")==0)
		 return evenCount;
	else return oddCount;
}
