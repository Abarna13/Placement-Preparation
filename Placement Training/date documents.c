#include<stdio.h>
#include<string.h>
int main()
{
   char str[200];
   int ind , noOfHypen=0,noOfYears,yearInd=0,checkDupInd,count=0;

   scanf("%[^\n]s",str);
   for( ind =0 ; str[ind] != '\0' ; ind++)
	if( str[ind] == '-')
	  noOfHypen++;
	noOfYears = noOfHypen/2;
   char years[noOfYears][5];
   noOfHypen = 0;
   for( ind =0 ; str[ind] != '\0' ; ind++)
  {
  	if( str[ind] == '-')
	 {
	     noOfHypen++;
	     if( noOfHypen == 2)
		 {
		 	strncpy(years[yearInd],str+ind+1,4);
		 	years[yearInd][4]='\0';
            //printf("%s ",years[yearInd]);
		 	noOfHypen=0;
		 	yearInd++;
		 	ind += 4;
		 }

	 }

  }
  for( ind =1 ; ind < yearInd ; ind++)
  {
  	  for( checkDupInd = 0  ; checkDupInd < ind && strcmp(years[ind],years[checkDupInd])!=0; checkDupInd++);
	  if( checkDupInd < ind )
	     years[ind][0] = '\0';

  }
 for(ind = 0 ; ind < yearInd ; ind++)
	if( years[ind][0]!='\0') count++;
	printf("%d ", count);
 return 0;
}
