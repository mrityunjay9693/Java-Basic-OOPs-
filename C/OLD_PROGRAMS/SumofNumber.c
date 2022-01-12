#include<stdio.h>
//#include(string.h)



int main()
{
	int temp, number, last_digit, sum=0;
	
	printf("Enter Umber : ");
	scanf("%d",&number);
	temp = number;
	while(temp>0)
	{

		last_digit = temp % 10;
		sum = sum + last_digit;
		temp= temp/10;
	}	
	printf("Sum of the digit of number = %d",sum);
	return 0;
}


