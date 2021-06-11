#include<stdio.h>
#include<malloc.h>
typedef struct freq
{
   int key;
   int value;
}FREQ;

int main()
{
   FREQ *dynArr=NULL,temp;
   int noe,ind,dynInd=0,noeInDyn=0,max,maxPos,count;

   scanf("%d",&noe);
   int arr[noe];
   for( ind = 0; ind < noe ;ind++)
     scanf("%d",&arr[ind]);
	for( ind = 0 ; ind < noe ; ind++  )//3
	{                    //1     < 2              2  !=   2
	  for( dynInd =0 ; dynInd < noeInDyn&& arr[ind] != dynArr[dynInd].key ; dynInd++);
	  if( dynInd < noeInDyn )//existing  1<2
		dynArr[dynInd].value++; //2:2
	  else//add new
	  {
	     dynArr = realloc( dynArr , (noeInDyn+1) * sizeof(FREQ));
	     dynArr[noeInDyn].key = arr[ind];//2
	     dynArr[noeInDyn].value = 1;//1
	     noeInDyn++;//2
	  }


	}
	for( dynInd = 0 ; dynInd < noeInDyn ; dynInd++)
	  printf("%d : %d\n",dynArr[dynInd].key,dynArr[dynInd].value);

  for(dynInd = 0; dynInd < noeInDyn ; dynInd++)
  {
  	max = dynArr[dynInd].value;
  	maxPos = dynInd;
  	for( ind = dynInd+1 ; ind < noeInDyn ; ind++)
	{
		if( max < dynArr[ind].value)
		{
			max = dynArr[ind].value;
			maxPos = ind;
		}
	}
	temp.key = dynArr[maxPos].key;
	temp.value = dynArr[maxPos].value;
	dynArr[maxPos].key  =dynArr[dynInd].key;
	dynArr[maxPos].value  =dynArr[dynInd].value;
	dynArr[dynInd].key  =temp.key;
	 dynArr[dynInd].value  =temp.value;
  }

	printf("\n\n");
	for( dynInd = 0 ; dynInd < noeInDyn ; dynInd++)
	  printf("%d : %d\n",dynArr[dynInd].key,dynArr[dynInd].value);
   for( dynInd = 0,ind=0 ; dynInd < noeInDyn ; dynInd++) // 5: 6
   {
   	 for( count =0; count < dynArr[dynInd].value ; count++)
		arr[ind++] = dynArr[dynInd].key;//5 5 5 5 5 5

   }
   for( ind =0 ; ind < noe ; ind++)
	  printf("%d ",arr[ind]);
}
