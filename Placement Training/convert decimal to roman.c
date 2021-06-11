/*
SYMBOL       VALUE
I             1
IV            4
V             5
IX            9
X             10
XL            40
L             50
XC            90
C             100
CD            400
D             500
CM            900
M             1000

num             Roman
3978 >= 1000          M
2978 >= 1000        MM
1978 > 1000        MMM
978 > 1000     X
978 > 900        MMMCM
78 >900 X
78 > 500 X
78 > 400
78 > 100 X
78 > 90 X
78 > 50          MMMCML
 28 >= 50
 28 >= 40
 28 >=10      MMMCMLX
 18 >=10      MMMCMLXX
 8 >=10
 8 >= 9
 8>= 5       MMMCMLXXV
 3 >= 5
 3 >= 4
 3 >=1     MMMCMLXXVI
 2 >=1     MMMCMLXXVII
 1>=1    MMMCMLXXVIII
 0

*/


#include<stdio.h>

int main()
{
   int num=2765;
   int decValue[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
   char romanValue[13][3] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","DM","M"};
   int noOfValues = 12,ind;
   for(ind = noOfValues ; ind >= 0 ; ind-- )
   {
     while( num >= decValue[ind])//3978 > 1000
     {
        num -=decValue[ind];
        printf("%s",romanValue[ind]);
     }
   }
   return 0;
}
