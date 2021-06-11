#include<stdio.h>
typedef struct
{
   int noOfSub;
   int lengthLong;
   int stPos;
}SUB;
SUB findDecreasingSeq( int arr[] , int noe);
int main()
{
    int  noe,ind;
    SUB res;
    scanf("%d",&noe);
    int arr[noe];
    for( ind =0 ; ind < noe ; ind++)
      scanf("%d",&arr[ind]);
	res = findDecreasingSeq( arr,noe);
	printf("%d %d %d",res.noOfSub , res.lengthLong,res.stPos);
	return 0;
}
SUB findDecreasingSeq( int arr[] , int noe)
{
	  SUB out;
	  int count=1,ind;
	  out.noOfSub = 0;
	  out.lengthLong =0;
	  out.stPos =0;
    for( ind = 1 ; ind < noe ; ind++)
	{
		if( arr[ind]  < arr[ind-1])
			count++;
		else
		{
			if( out.lengthLong < count )
			{
				out.lengthLong = count;
				out.stPos = ind - count;
			}
			if( count !=1) out.noOfSub++;
			count =1;

		}
	}
	if( out.lengthLong < count )
			{
				out.lengthLong = count;
				out.stPos = ind - count;
			}
			if( count !=1) out.noOfSub++;
    return out;
}
