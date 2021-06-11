#include<stdio.h>
char * eliminateVowelString(char*);
int main()
{
  char str[100];
  scanf("%s",str);
  printf("%s",eliminateVowelString(str));
  return 0;
}

char * eliminateVowelString( char * str) //char str[]
{
	int ind ,pos=0;///aaabcd
	for( ind = 0 ; str[ind] != '\0' ; )
	  {
	  	if( ( str[ind] =='A'|| str[ind] =='E'||str[ind] =='I'||str[ind] =='O'|| str[ind] =='U'))
		    ind++;
		else if( ( str[ind] =='a'|| str[ind] =='e'||str[ind] =='i'||str[ind] =='o'|| str[ind] =='u'))
			ind++;
		else
		 str[pos++] = str[ind++];

	  }

	str[pos] = '\0';
	return str;

}
