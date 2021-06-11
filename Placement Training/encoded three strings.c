#include<stdio.h>
#include<string.h>
#include<malloc.h>
char * strNcat(char*,char*,int);
char * strNcpy(char*,char*,int);
char * toggleCase(char*);
int main()
{
   char input1[100],input2[100],input3[100];
   int len1,len2,len3,start1,end1,mid1,start2,mid2,end2,start3,mid3,end3;
   char *output1=0,*output2=0,*output3=0;
   scanf("%s %s %s",input1,input2,input3);
   len1 = strlen(input1);
   len2 = strlen(input2);
   len3 = strlen(input3);
   if(len1 % 3 ==0 )
   {
      start1 = 0;
      mid1 = len1/3;// 15/3 => 5
      end1 = mid1 + (len1/3);
   }
   else if( len1 % 3 == 1)//Aberration
   {
      start1 = 0;
      mid1 = len1/3;
      end1 = mid1+(len1/3)+1;
   }
   else if( len1 % 3 == 2)//Aber rat ions
   {
      start1 = 0;
       mid1 = (len1/3)+1;
       end1 = mid1+(len1/3);
   }
   if(len2 % 3 ==0 )
   {
      start2 = 0;
      mid2 = len2/3;
      end2 = mid2 + (len2/3);
   }
   else if( len2 % 3 == 1)//Aberration
   {
      start2 = 0;
      mid2 = len2/3;
      end2 = mid2+(len2/3)+1;
   }
   else if( len2 % 3 == 2)//Aber rat ions
   {
      start2 = 0;
       mid2 = (len2/3)+1;
       end2 = mid2+(len2/3);
   }
   if(len3 % 3 ==0 )
   {
      start3 = 0;
      mid3 = len3/3;
      end3 = mid3 + (len3/3);
   }
   else if( len3 % 3 == 1)//Abe rrat ion
   {
      start3 = 0;
      mid3 = len3/3;
      end3 = mid3+(len3/3)+1;
   }
   else if( len3 % 3 == 2)//Aber rat ions
   {
      start3 = 0;
       mid3 = (len3/3)+1;
       end3 = mid3+(len3/3);
   }
   output1 = malloc(mid1+mid2+mid3+1);
    output2 = malloc( (end1-mid1)+(end2-mid2)+(end3-mid3)+1);
    output3  = malloc((len1-end1)+(len2-end2)+(len3-end3)+1);
   strNcpy(output1,input1,mid1);//Abe
   strNcat(output1,input2,mid2);
   strNcat(output1,input3,mid3);

   //printf("%s ",output1);


   //printf("%s  ",output2);
   strNcpy(output2,input1+mid1,end1-mid1);//Abe

   strNcat(output2,input2+mid2,end2-mid2);

   strNcat(output2,input3+mid3,end3-mid3);


   strNcpy(output3,input1+end1,len1-end1);//Abe

   strNcat(output3,input2+end2,len2-end2);

   strNcat(output3,input3+end3,len3-end3);
   toggleCase(output3);
    printf("%s %s %s",output1, output2,output3);


   //strncat()

}
char * toggleCase( char * str)
{
	int ind;
	for( ind =0 ; str[ind] != '\0' ; ind++)
	if( str[ind] >='A' && str[ind] <= 'Z')
		str[ind]+=32;
	else
		str[ind]-=32;
	return str;
}

char * strNcpy( char * des , char *src , int noOfChars)
{
	int srcInd , desInd;
	for( srcInd = 0 , desInd=0;srcInd < noOfChars;srcInd++,desInd++ )
		des[desInd] = src[srcInd];
   des[desInd] = '\0';
	return des;
}
char * strNcat( char * des , char *src , int noOfChars)
{
	int srcInd , desInd;
	desInd = strlen(des);
	for( srcInd = 0 ;srcInd < noOfChars;srcInd++,desInd++ )
		des[desInd] = src[srcInd];
   des[desInd] = '\0';
	return des;
}

