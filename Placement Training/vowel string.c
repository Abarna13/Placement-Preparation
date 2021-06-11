#include<stdio.h>
#include<string.h>
int isVowel( char ch)
{
	if( ch =='A' ||ch =='E' ||ch =='I' ||ch =='O' ||ch =='U'  )
		return 1;
	if( ch =='a' ||ch =='e' ||ch =='i' ||ch =='o' ||ch =='u'  )
		return 1;
	return 0;

}
int main()
{
  char str[100];
  int ind , vowelCount=0 , maxCount=0,stPos,maxStPos,k;
  scanf("%s",str);
  scanf("%d",&k);
  for( ind = 0; ind < k ; ind++)
   if( isVowel(str[ind]) == 1)
      vowelCount++;
  maxCount = vowelCount;//2
  maxStPos = stPos =0; //0
  for( ; str[ind]!='\0';ind++ )
  {
     if( isVowel(str[ind-k]) ==1)// 7-5-1 1
        vowelCount--;
	 if( isVowel(str[ind]) == 1)
	   vowelCount++;
	printf("%d %d %d\n",ind,vowelCount,maxCount);
	  if( vowelCount > maxCount)
	  {
	     maxCount = vowelCount;
	     maxStPos = ind-k+1;
	  }

  }

  printf("%d %s",maxCount,str+maxStPos);
  return 0;
}
