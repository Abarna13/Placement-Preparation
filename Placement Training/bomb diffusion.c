#include<stdio.h>
int main()
{
  int arr[] = {4,2,-5,11},*output;
  int ind ,k =3 , sum =0,kele , noe = 4; // size+k
  output = malloc(sizeof(int)*noe);
  for( ind = 0 ; ind < noe ; ind++ )
  {
      for( kele = 1 ; kele <= k ; kele++)
      {
         sum += arr[((noe + kele +ind)% noe) ]; // 0 1 4+2+0 7 % 4 3

        // printf("%d");
      }
      output[ind] = sum;
      sum = 0;
  }
for( ind =0 ; ind < noe ; ind++)
	printf("%d ", output[ind]);

}
