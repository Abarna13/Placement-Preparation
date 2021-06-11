#include<stdio.h>
//#define 'R' 0
char * moveRobot(int,int,char*,char*);
int main()
{
   int x=3,y=4;
   char input3[6]= "2-2-E",input4[100]="RMLMLMRM";//"RMLMLM";
   printf("%s",moveRobot(x,y,input3,input4));
//printf("%d",'R');
   return 0;

}

char * moveRobot( int x , int y , char * currPos , char * input)
{//RMLMLM

    char turn[2][4] = {{'S','N','E','W'},{'N','S','W','E'}};
    int move[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};
    int currX,currY,ind ,prevX,prevY;
    char currDir;
    char * output=0;
    currX = currPos[0]-'0';//'2'-'0' 50-48 2
    currY = currPos[2]-'0';//2-2-E
   // if( )
    currDir =currPos[4];//E
//    printf("First : %d %d %c\n" , currX,currY,currDir);
    for( ind = 0 ; input[ind] != '\0' ; ind++)
    {
       if(input[ind] == 'R')
	   {
	   	  if( currDir == 'E')
			currDir = turn[0][0];
		  else if( currDir == 'W')
			currDir = turn[0][1];
		  else if( currDir == 'N')
		    currDir = turn[0][2];
		  else if( currDir == 'S')
			currDir = turn[0][3];
	   }
	   else if( input[ind] == 'L')
	   {
	   	if( currDir == 'E')
			currDir = turn[1][0];
		  else if( currDir == 'W')
			currDir = turn[1][1];
		  else if( currDir == 'N')
		    currDir = turn[1][2];
		  else if( currDir == 'S')
			currDir = turn[1][3];

	   }
	   else if( input[ind] == 'M')
	   {
	   	  prevX = currX;
	   	  prevY = currY;
	   	  if( currDir == 'E')
		  {

		  	currX += move[0][0];
		  	currY += move[0][1];
		  }
	   	  else if( currDir == 'W')
		  {
		  	currX += move[1][0];
		  	currY += move[1][1];
		  }
		  else if( currDir == 'N')
		  {
		  	currX += move[2][0];
		  	currY += move[2][1];
		  }
		  else if( currDir == 'S')
		  {
		  	currX += move[3][0];
		  	currY += move[3][1];
		  }
		  if( currX < 0 || currX > x || currY<0||currY>y )//invalid
		  {
		  	//printf("%d %d %c-ER",prevX,prevY,currDir);
		  	//x-y-E-ER
		  	output = malloc(9);
		  	output[0] = prevX+'0';
		  	output[1]='-';
		  	output[2]= prevY +'0';
		  	output[3] = '-';
		  	output[4] = currDir;
		  	output[5] ='-';
		  	output[6] = 'E';
		  	output[7] = 'R';
		  	output[8] ='\0';
		  	return output;
		  }
	   }
	   //printf("%d %d %c\n" , currX,currY,currDir);
	}
	output = malloc(6);
		  	output[0] = currX+'0';
		  	output[1]='-';
		  	output[2]= currY +'0';
		  	output[3] = '-';
		  	output[4] = currDir;
		  	output[5] = '\0';
   // printf("%d %d %c" , currX,currY,currDir);
  return output;
}
