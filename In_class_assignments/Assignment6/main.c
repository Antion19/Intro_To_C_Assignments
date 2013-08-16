#include <stdio.h>
#define students 40


int main () {
	int array1[10], array2[10], array3[students], array4[10], i;
	
	printf("Element Value\n");
	
	for (i = 0; i < 10; i++)
	{
		array1[i] = i;
		array2[i] = 2*array1[i] + 2;
		printf("%2d        %2d\n", array1[i], array2[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		array4[i] = 0;
	}
	
	for (i = 0; i < students; i++)
	{
		printf("input an integer between 1 and 10 from a single survey:\n");
		scanf("%d", &array3[i]);
		array4[array3[i]-1] += 1;
	}
	
	printf("What follows is a summary of the inputed data:\n");
	
	for (i = 0; i < 10; i++)
	{
		printf("%2d     %2d\n", array1[i] + 1, array4[i]);
	}

	
	
	
    return 0;
}
