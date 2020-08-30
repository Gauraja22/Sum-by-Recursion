#include<stdio.h>
int sum(int n)
{
	if(n==0)
	    return 0;
	else 
	    return(n%10 + sum(n/10));
}
main()
{
	int Input_number=1234;
	printf("Sum of digits of %d is %d",Input_number,sum(Input_number));
}
