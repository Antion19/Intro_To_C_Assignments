#include <stdio.h>

int swap(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
	return 0;
}

int main () {
	int array1[5], i, *x, *y, j;
	
	printf("Enter five integers for the array:\n");
	for (i = 0; i < 5; i++) {
		scanf(" %d", &array1[i]);
	}
	
	for (j = 0; j < 4; j++) {
		
		for (i = 0; i < 4; i++) {
			if (array1[i] > array1[i+1])
			{
				x = &array1[i];
				y = &array1[i+1];
			
				swap(x, y);
			}
		}
	}
	
	for (i = 0; i < 5; i++) {
		printf("%d ", array1[i]);
	}
	
	
    return 0;
}
