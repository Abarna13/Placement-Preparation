/*

ind1  ind2   W   Technologies
 0     0
       1
       2
       3
       4
       5
       6
       7
       8
       9
       10
       11
       12
       13
*/


#include<stdio.h>
#include<string.h>
#include<malloc.h>

int main()
{
   char str1[100] , str2[100] ;
   char *temp;
   int input3 , input4,ind1,ind2,len1,len2,tempInd;
   scanf("%s %s",str1,str2);
   scanf("%d %d",&input3 , &input4);
   len1 = strlen(str1);
   len2 = strlen(str2);
   temp = malloc(len1+len2+1);
   tempInd= 0 ;
   if( input3 == 0 )
   {
	 if( str1[0] != str2[0] && input4 == 0 )
		temp[tempInd++] = str1[0]+32;
	 else if( str1[0] != str2[0] && input4 == 1 )
		temp[tempInd++] = str1[0];
     for( ind1 = 1 ; ind1 < len1 ; ind1++)
     {
        for( ind2 = 1 ; ind2 < len2 && str1[ind1]!= str2[ind2] ; ind2++);
        if( ind2==len2 && input4==0)
         temp[tempInd++] = str1[ind1];
         else if( ind2==len2 && input4==1)
			temp[tempInd++] = str1[ind1]+32;
     }
   	 if( str2[0] != str1[0]&& input4==0)
		temp[tempInd++] = str2[0]+32;
	 else
        temp[tempInd++] = str2[0];
     for( ind2 = 1 ; ind2 < len2 ; ind2++)
     {
        for( ind1 = 1 ; ind1 < len1 && str2[ind2]!= str1[ind1] ; ind1++);
        if( ind1==len1 && input4 == 0)
         temp[tempInd++] = str2[ind2];
         else if( ind1==len1 && input4 == 1)
			temp[tempInd++] = str2[ind2]-32;
     }

   }
   else
   {
	if( str1[0] == str2[0] && input4 == 0)  //Wipro   two  0
		temp[tempInd++] = str1[0]+32;
	else if(str1[0]==str2[0]&&input4 == 1)
		temp[tempInd++] = str1[0];
  for( ind1 = 1 ; ind1 < len1 ; ind1++)
     {
        for( ind2 = 1 ; ind2 < len2 && str1[ind1]!= str2[ind2] ; ind2++);
        if( ind2<len2 && input4 == 0)
         temp[tempInd++] = str1[ind1];
		else if( ind2<len2 && input4 == 1)
			temp[tempInd++] = str1[ind1]-32;
     }
   	 if( str2[0] == str1[0] && input4 == 0)
		temp[tempInd++] = str2[0]-32;
	else if(str2[0]==str1[0]&&input4 == 1)
		temp[tempInd++] = str2[0]+32;

     for( ind2 = 1 ; ind2 < len2 ; ind2++)
     {
        for( ind1 = 1 ; ind1 < len1 && str2[ind2]!= str1[ind1] ; ind1++);
        if( ind1<len1 && input4 == 0)
         temp[tempInd++] = str2[ind2];
        else if( ind1<len1 && input4 == 1)
         temp[tempInd++] = str2[ind2]-32;

     }

   }
   temp[tempInd] = '\0';

   printf("%s",temp);
}
