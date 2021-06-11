#include<stdio.h>
int main()
{
   char str[100],ch;
   int ind , currBarInd=-1 , prevBarInd =-1, tempStars=0, noOfStars=0;
   int noOfInputs =0,*stIndices=0,*endIndices=0,st,end,starInd,*res=0;
   scanf("%s",str);
   //scanf("%d",&noOfInputs);
// |**|*|***| ->10   0,5   0,6   5,9
   while(1)
   {
    scanf("%d%c", &ind,&ch);
    stIndices = realloc(stIndices,(noOfInputs+1)*sizeof(int)) ;
    stIndices[noOfInputs] = ind;// stIndices[2] =5 1,3,5
    noOfInputs++; //1
       if(ch=='\n') break;
   }

   endIndices = malloc( noOfInputs * sizeof(int));
   for( ind =0 ; ind < noOfInputs ;ind++)
     scanf("%d",&endIndices[ind]);

   //int	res[noOfInputs];
   0 5    0 6    5 9
   res  = malloc(noOfInputs*sizeof(int));//output
  for( ind = 0 ; ind < noOfInputs ; ind++ )
  {  //|**|*|***|
     for( st = stIndices[ind] , end = endIndices[ind] ; st <= end && str[st]!='\0'; st++)
     {      0                     5
        if( str[st]=='|') //5
        {
           if(currBarInd==-1) //0==-1
             currBarInd  = st;//3
		   else
		   {
		      prevBarInd = currBarInd;//3
		      currBarInd = st;//5
		      for( starInd = prevBarInd+1 ; starInd < currBarInd ; starInd++)
		         noOfStars++;
		   }
        }

     }
     //printf("%d",noOfStars);
     res[ind] = noOfStars;
     noOfStars =0;
     currBarInd=-1;
     prevBarInd=-1;
  }
  for( ind =0 ; ind < noOfInputs ; ind++)
	printf("%d ", res[ind]);
}
