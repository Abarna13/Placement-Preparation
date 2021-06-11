/*
str              primeAscii      compositeAscii
Khokharnikunj      kak             Khohrniunj
                   akk             uronnjihhK
                   akkuronnjihhK
K - 75
h - 104
o -111
k - 107
h - 104
a - 97
r - 114
n - 110
i - 105
k - 107
u - 117
n - 110
j -106


*/

#include<stdio.h>
#include<string.h>
#include<math.h>
void sortAsc(char*);
void sortDes(char*);
int isPrime( char  ch)
{
	int num = ch ,sq, fact;
	sq = sqrt(num);
	for( fact=  2 ; fact <=sq ; fact++)
		if( num % fact == 0)
		   return 0;
	return 1;


}
int main()
{
   char str[100],primeAscii[100],compoAscii[100];
   int strInd =0, primeInd =0, compoInd=0;
   scanf("%s", str);
   for( strInd =0 ; str[strInd]!= '\0' ; strInd++)
   {
      if( isPrime(str[strInd]) == 1)
        primeAscii[primeInd++] = str[strInd];
	  else
	    compoAscii[compoInd++] = str[strInd];
   }
   primeAscii[primeInd] ='\0';
   compoAscii[compoInd] = '\0';
   sortAsc(primeAscii);
   sortDes( compoAscii);
   printf("%s" , strcat(primeAscii,compoAscii));
   return 0;
}

sortAsc( char * str)
{
    int pos , scope,minPos;
    char min,temp;
    int len = strlen(str);
    for( pos = 0 ; str[pos] != '\0' ; pos++)
    {
       min = str[pos];
       minPos = pos;
        for( scope = pos+1 ; scope < len ; scope++)
          if( min > str[scope])
          {
            min = str[scope];
            minPos = scope;
          }
          temp = str[minPos];
          str[minPos] = str[pos];
          str[pos] = temp;
    }
}

sortDes( char * str)
{
    int pos , scope,len,minPos;
    char min , temp;
     len = strlen(str);
    for( pos = len-1; pos >=0 ; pos--)
    {
       min = str[pos];
       minPos = pos;
        for( scope = pos-1 ; scope >=0 ; scope--)
          if( min > str[scope])
          {
            min = str[scope];
            minPos = scope;
          }
          temp = str[minPos];
          str[minPos] = str[pos];
          str[pos] = temp;
    }
}
