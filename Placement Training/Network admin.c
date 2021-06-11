#include<stdio.h>
int main()
{
  char str[100],output[100];
  int strInd,outInd,count=0;
  scanf("%s",str);
  for( strInd = strlen(str)-1 , outInd = 0 ; strInd >= 0 ; strInd--,outInd++)
     output[outInd] = str[strInd];
output[outInd]='\0';
  for( strInd = 0; str[strInd]!='\0' ; strInd++)
   if( str[strInd] == output[strInd])
     count++;
  printf("%s %d",output,count);
}
