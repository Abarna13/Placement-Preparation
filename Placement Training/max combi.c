#include<stdio.h>

int main()
{
   int noe , ind,facto=1;
   scanf("%d",&noe);
   int arr[noe];
   for( ind = 0 ; ind < noe ; ind++)
      scanf("%d" , &arr[ind]);
   for( ind = 1 ; ind <= noe ; ind++)
     facto = facto * ind;
	printf("%d",facto-1);
return 0;
}
