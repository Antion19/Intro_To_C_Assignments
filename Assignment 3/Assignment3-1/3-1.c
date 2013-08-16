#include <stdio.h>
/*Andrew Leinbach
 Assignment 3 part 1
 CSCI 1121
 */



int main () {
	int days, start, test1, test2, i, j = 0;
	char k1, k2;
	
	test1 = 1;
	
	printf("How many days in the month?\n");
	test2 = scanf("%d", &days);
	
	printf("What day of the week is the first of the month?\n");
	
	scanf(" %c%c", &k1, &k2);
	
	
	/* below is to turn the day given into an integer*/
	if (k1 == 's' || k1 == 'S')
		{
			if (k2 == 'a' || k2 == 'A')
				{
					start = 7;
				}
			else if (k2 == 'u' || k2 == 'U')
				{
					start = 1;
				}
			else
				{
					test1 = 0;
				}
		}
	else if (k1 == 't' || k1 == 'T')
		{
			if (k2 == 'h' || k2 == 'H')
			{
				start = 5;
			}
			else if (k2 == 'u' || k2 == 'U')
			{
				start = 3;
			}
			else
			{
				test1 = 0;
			}
		}
	else if (k1 == 'm' || k1 == 'M')
		{
			start = 2;
		}
	else if (k1 == 'w' || k1 == 'W')
		{
			start = 4;
		}
	else if (k1 == 'f' || k1 == 'F')
		{
			start = 6;
		}
	else
		{
			test1 = 0;
		}
	
	
	/* below is to create the calendar image*/
	if (test1 && test2)
	{
		printf(" Sun Mon Tue Wed Thu Fri Sat\n ");
	
		/* placement for day 1*/
		for (i = 1; i < start; i++) {
			printf("    ");
			j++;
		}
		
		/* day iteration */
		for (i=1; i <= days; i++) {
			printf("  %2d", i);
			j++;
			if (j == 7)
			{
				printf("\n ");
				j = 0;
			}
		}
	
		printf("\n");
	}
	else {
		printf("Invalid input!\n");
	}

    return 0;
}
