int main()
{
   int num = 100002339,dig,divisor,count=0,safe;
    for( dig = 0 ; dig <= 9 ; dig++)
	{
		if( findFreq(num,dig)==1)
			count++;
	}



    printf("%d",count);
    return 0;
}

int findFreq( int num , int givenDig)
{
	int count =0,dig;
	while( num )//5   5 0!=0
	{
		dig = num % 10; //5
		if( dig == givenDig) //5== 5
			count++;//2
		num = num / 10;//0
	}
	return count;
}
