#include<stdio.h>
#include<string.h>
#include<malloc.h>
int isVowel( char ch)
{
	if( ch == 'A'|| ch == 'E'|| ch == 'O' || ch == 'U'|| ch =='I')
		return 1;
	if( ch == 'a'|| ch == 'e'|| ch == 'i' || ch == 'o'|| ch =='u')
		return 1;
	return 0;
}
int main()
{
  char nos , ind,len;
  char temp[100];
  scanf("%d",&nos);
  char *str[nos];
  for( ind = 0 ; ind < nos ; ind++ )
  {
     scanf("%s",temp);
     len = strlen(temp);
     str[ind] = malloc(len+1);
     strcpy(str[ind],temp);
  }
  temp[0]='\0';
  for( ind = 0; ind < nos ; ind++)
  {
     if( isVowel(str[ind][0]) == 1)
       if( isVowel(str[ind][strlen(str[ind])-1] ) == 1)
          strcat(temp,str[ind]);
  }
  if(temp[0]=='\0')
    printf("No matches found");
  else
    printf("%s",temp);
  //char month[12][10] = {"January","February","March","April","May","","","","","","",""}
}
