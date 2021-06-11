#include<stdio.h>
#define YES 1
#define NO 0
int main()
{
  char str[100],mobileNumber[15]="\0";
  char *ptr,*prev=NULL,**output=0;
  int outInd=0,ind;
  scanf("%[^\n]s",str);
  ptr = strtok(str," ,.");//9
  while(1) //9 7 3 4 3 2 22 48 and +1 9 7 double 4 3 triple 2 48 are my 2 mobile numbers.
  {

     if( isAllDigits(ptr)==YES)// 7        prev   ptr
     {                        //              48     are
           strcat(mobileNumber,ptr);//+19744322248
          // printf("%s ",mobileNumber);
     }
     else if( strcmp(ptr,"double")==0)
	 {
	 	ptr = strtok(NULL," ,.");//2
	 	strcat(mobileNumber,ptr);//986542
	 	strcat(mobileNumber,ptr);//9865422
	 }
	 else if( strcmp(ptr,"triple")==0)
	 {
	 	ptr = strtok(NULL," ,.");
	 	strcat(mobileNumber,ptr);
	 	strcat(mobileNumber,ptr);
	 	strcat(mobileNumber,ptr);
	 }
	 else if(ptr[0]=='+')
		strcpy(mobileNumber,ptr);
	 prev = ptr;//9
     ptr = strtok(NULL," ,.");//7 2 number
     if(ptr == NULL)break;
     if( isAllDigits(prev)==YES&&isAllDigits(ptr)==NO)
		if( strcmp(ptr,"double")!=0&&strcmp(ptr,"triple")!=0)
		{
			//printf("%s \n",mobileNumber);
			if( strlen(mobileNumber)>=10){

			output = realloc(output,(outInd+1) * (sizeof(char*)));

			if( mobileNumber[0]!='+')
				{
					output[outInd] = malloc(14);
					strcpy(output[outInd],"+91");

					strcat(output[outInd],mobileNumber);
					//printf("%s  :",output[outInd]);
				}
			else{
			output[outInd] = malloc(strlen(mobileNumber)+1);
			strcpy(output[outInd],mobileNumber);

			}
			outInd++;
			}
		  mobileNumber[0]='\0';
		}

  }
  for( ind = 0 ; ind < outInd -1; ind++)
	 printf("%s,",output[ind]);
  printf("%s",output[ind]);
  return 0;
}

int isAllDigits( char * str)
{
  int ind;
  for( ind = 0 ; str[ind] !='\0' ; )// 98453 on
   {
     if( str[ind]>='0'&& str[ind] <='9')
        ind++;
	 else return NO;
	}
	if(str[ind]=='\0')
       return YES;
    else return NO;
}
