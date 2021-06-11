/*
avjikljavik
len = 11
mid = 5


*/

#include<stdio.h>
int main()
{
   char str[] = "avjikljavik";
   int countArr[26]={0};
   int ind,len,mid,st=0,end;
   scanf("%s",str);
   for( len = 0; str[len] !='\0' ; len++);
   mid = len / 2;
   end = len-1;
   while(st < mid) 0 < 5
   {
       /*countArr[str[st]-'a']++;
       countArr[str[end]-'a']--;*/
//       if( str[st] >= 'A' && str[str]<='Z')
       ind = str[st] - 'a'; // str[0]
       countArr[ind] = countArr[ind]+1;
       ind = str[end] - 'a'; // str[0]
       countArr[ind] = countArr[ind]-1;

		st++;
		end--;
   }
   for( ind = 0; ind < 26 ; ind++ )
      if( countArr[ind]!= 0 )
		  break;
  if( ind == 26)
	  printf("Balanced String");
   else
	  printf("Not balanced String");
      //printf("%d ", countArr[ind]);
   return 0;
}
