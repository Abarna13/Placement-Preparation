#include<stdio.h>
int main()
{
  int noOfSystems,ind,sum=0;
  scanf("%d",&noOfSystems);
  int state[noOfSystems] , distance[noOfSystems];
  for( ind =0 ; ind < noOfSystems ; ind++ )
    scanf("%d",&state[ind]);
  for( ind =0 ; ind < noOfSystems ; ind++ )
    scanf("%d",&distance[ind]);
  for( ind =0 ; ind < noOfSystems ; ind++ )
  {
     if( state[ind] == 0 )
      sum = sum + ( distance[ind] - distance[ind-1]);
  }
  printf("%d",sum);
}
