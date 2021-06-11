#include<stdio.h>
#include<malloc.h>

int strLen(char*);
int main()
{
   char strNum1[100],strNum2[100];
   char * output=0;
   int ind1 , ind2,sum=0,carry=0,outLen,len;
   scanf("%s %s",strNum1,strNum2);
  ind1 = strLen(strNum1)  ;
  ind2 = strLen(strNum2)  ;
  outLen = ind1 > ind2 ? (ind1+1):(ind2+1);
  output = malloc(outLen);
  len = outLen;
  //printf("%s",output);
  //output[outLen]='\0';
  for(ind1--,ind2--,outLen--; ind1 >= 0 && ind2 >=0;ind1--,ind2--,outLen--)
  {
  	sum = (strNum1[ind1]-'0') + (strNum2[ind2]-'0')+carry;
  	output[outLen]= (sum % 10)+'0';//14
  	carry = sum / 10;//1
  }
  //printf("%s ",output);
  while( ind1>= 0 )
  {
  	sum = (strNum1[ind1]-'0')+carry;
  	output[outLen]= (sum % 10)+'0';
  	carry = sum / 10;
  	ind1--;
  	outLen--;
  }
  while( ind2 >= 0 )
  {
	sum = (strNum2[ind2]-'0')+carry;
  	output[outLen]= (sum % 10)+'0';
  	carry = sum / 10;
  	ind2--;
  	outLen--;

  }
  //if(carry)
//  printf("%s",output);
output[len]='\0';
if(carry)
	output[0]=(carry)+'0';
else
	strcpy(output,output+1);

  printf("%s",output);
}

int strLen( char * str)
{
	int len;
	for( len = 0; str[len] != '\0';len++);
	return len;
}
