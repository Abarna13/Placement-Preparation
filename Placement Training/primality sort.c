#include<stdio.h>
int isPrime( char  ch)
{
	int num = ch ,sq, fact;
	sq = sqrt(num);
	for( fact=  2 ; fact <=sq ; fact++)
		if( num % fact == 0)
		   return 0;
	return 1;


}

sortAsc( int arr[] , int st , int end)
{
    int pos , scope,minPos;
    int min,temp;
    ///int len = strlen(str);
    for( pos = st ; pos <end ; pos++)
    {
       min = arr[pos];
       minPos = pos;
        for( scope = pos+1 ; scope < end ; scope++)
          if( min > arr[scope])
          {
            min = arr[scope];
            minPos = scope;
          }
          temp = arr[minPos];
          arr[minPos] = arr[pos];
          arr[pos] = temp;
    }
}

int main()
{
    int noe, ind , temp,pos;
    scanf("%d" , &noe);
    int  arr[noe];
    for( ind = 0; ind < noe ; ind++ )
       scanf("%d", &arr[ind]);
	for( pos = 0 , ind =0 ; ind < noe ; ind++)
	{
	     if( isPrime(arr[ind])==1)
	     {
	        temp = arr[pos];
	        arr[pos] = arr[ind];
	        arr[ind] = temp;
	        pos++;
	     }
	}
	for( ind = 0; ind < noe ; ind++)
	   printf("%d ",arr[ind]);
	printf("\n\n");
	sortAsc(arr , 0,pos);
	sortAsc(arr,pos,noe);
	for( ind = 0; ind < noe ; ind++)
	   printf("%d ",arr[ind]);
	return 0;
}
