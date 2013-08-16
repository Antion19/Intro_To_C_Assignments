#include <stdio.h>
/*Andrew Leinbach
 Assignment 3 part 2
 CSCI 1121
 */

int main () {
   
	int number1[30], number2[30], add[31], multi[60],
	i, end1, end2, j, carry, intermediate[60], end_a, end_b, x;
	char k;
	
	
	printf("Enter the first number (integer with up to 30 values):\n");
	
	scanf("%c", &k);
	for (i=0;k != '\n'; i++) {
		number1[i] = (k - '0');
		scanf("%c", &k);
		
	}
	
	printf("\n");

	end_a = end1 = --i; /* -- because of the way arrays are numbered*/
	
	printf("Enter the second number (integer with up to 30 values):\n");
	
	
	scanf("%c", &k);
	for (i=0;k != '\n'; i++) {
		number2[i] = (k - '0');
		scanf("%c", &k);
	}	
	printf("\n");
	
	end_b = end2 = --i; /* -- because of the way arrays are numbered*/
	
	
	/* below is adding the two together*/
	carry = 0;
	i = 0;
	
	while (end1 >= 0 && end2 >= 0) {
		j = number1[end1--] + number2[end2--] + carry;
		if (j < 10)
		{ 
			add[i] = j;
			carry = 0;
		}
		else
		{
			add[i] = (j%10);
			carry = 1;
		}
		i++;
	}
	
	if (end1 == end2)
	{
		if(carry)
		{
		add[i] = carry;
		carry = 0;
			i++;
		}
		
	}
	else if (end1 == -1)
	{
		while (end2 >= 0)
		{
			j = number2[end2--] + carry;
			if (j < 10)
			{ 
				add[i] = j;
				carry = 0;
			}
			else
			{
				add[i] = (j%10);
				carry = 1;
			}
			i++;
		}
	}
	else if (end2 == -1)
	{
		while (end1 >= 0)
		{
			j = number1[end1--] + carry;
			if (j < 10)
			{ 
				add[i] = j;
				carry = 0;
			}
			else
			{
				add[i] = (j%10);
				carry = 1;
			}
			i++;
		}
	}
		if (carry)
		{
			add[i] = 1;
		}
		else {
			i--;
		}
		
		printf("The two numbers added together are:\n");
		while (i >= 0)
		{
			printf("%d", add[i]);
			i--;
		}
	printf("\n");
	
	/*What follows deals with the multiplication*/
	
	for (i = 0; i < 60; i++) {
		multi[i] = 0;
		intermediate[i] = 0;
	}
	
	
	carry = 0;
		for (i = 0; i <= end_b; i++)
		{
			for (j = 0; j <= end_a; j++)
			{
				x = number1[end_a - j]*number2[end_b - i]+carry;
				intermediate[j+i]= (x % 10);
				carry = (x / 10);
				multi[j+i] += intermediate[j+i];
				if (multi[j+i] > 9)
				{
					multi[j+i+1] += multi[j+i]/10;
					multi[j+i] %= 10;
				}
			}
			multi[j+i] += carry;
			carry = 0;
		}

	
	printf("The two numbers multiplied are:\n");
	
	for (x = (i+j-1); x >= 0; x--) {
		printf("%d", multi[x]);
	}
	
	printf("\n");
		
    return 0;
}
