/*
   sending

   len row  spaceCtr  noOfChr
    7   1        6         1
        2        5     		2
        3		 4			3
        4		 3			4
        5		 2			5
        6		 1			6
        7		 0			7

*/

#include<stdio.h>
int main()
{
    char str[] ="Sending";
    int len , row , col ,spaceCtr , noOfChr;
    for( len = 0; str[len] != '\0';len++);
    spaceCtr = len-1;
    noOfChr = 1;
    for(row = 1 ; row <= len ; row++ , spaceCtr--,noOfChr++)
    {
        for( col = 1 ; col <= spaceCtr ; col++)
           printf(" ");
		for( col = 0 ; col < noOfChr ; col++)
		  printf("%c",str[col]);
		printf("\n");
    }
    for( col = 1 ; col < len ; col++)
		  printf("%s\n",str+col);

}
