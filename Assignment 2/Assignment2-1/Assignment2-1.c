#include <stdio.h>

int main () {
   
	int n, j, k;
	printf("Enter the height of the pyramid as an integer between 1 and 30:\n");
	scanf("%d", &n);
	
	if (n >=1 && n <= 30)
	{
		for (j = 0;j < n; j++)
		{
			for (k = 0;k <= (n-j);k++)
			{
				printf(" ");
			}
			printf("*");
			for (k = 0;k < (j * 2);k++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else {
		printf("Invalid input\n");
	}
	
	
    return 0;
}
