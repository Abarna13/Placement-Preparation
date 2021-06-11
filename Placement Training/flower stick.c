#include<stdio.h>
#include<limits.h>
int main()
{
   int arr[] = {8, 7, 5 ,10 ,46 ,23 ,16, 11};
   //{13, 24, 31, 67, 45, 90, 89, 71, 4, 33, 11, 18, 21, 40 ,55};
   int noofElements = 8 , k = 3,minVal,minPos,ascInd,minInd,temp,last;

   for( ascInd =0 ; ascInd < noofElements ; ascInd++)
	printf("%d ",arr[ascInd]);
	printf("\n");
   for( ascInd = 0; ascInd < k ; ascInd++)
   {
   	minVal = INT_MAX;
   	//minPos = -1;
   	for( minInd = ascInd ; minInd < k ; minInd++)
	{
		if( arr[minInd] < minVal)
		{
			minVal = arr[minInd];
			minPos = minInd;
		}

	}
	//if( minPos != -1)
	{
		temp = arr[minPos];
		arr[minPos] = arr[ascInd];
		arr[ascInd] = temp;
	}

   }
   for( ascInd =0 ; ascInd < k ; ascInd++)
	printf("%d ",arr[ascInd]);

	for( last = noofElements-1 ; last >= k ; last-- )
	{
		//minPos = -1;
		minVal = INT_MAX;
		for( minInd = k ; minInd <=last ; minInd++)
		{
			if( arr[minInd]< minVal)
			{
				minVal = arr[minInd];
				minPos = minInd;
			}
		}
		//if( minPos != -1)
		{
			temp = arr[minPos];
			arr[minPos] = arr[last];
			arr[last] = temp;
		}

	}
      for( ascInd =k ; ascInd < noofElements ; ascInd++)
	printf("%d ",arr[ascInd]);

return 0;
}
