#include <stdio.h>

int main () {
	int number = 10, *point1;
	printf("%p\n", &number);
	printf("%d\n", number);
	point1 = &number;
	
	printf("%p\n", &point1);
	printf("%d\n", sizeof(point1));
	printf("%p\n", point1);
	printf("%d\n", *point1);
	
	/* now beginning part 2*/
	
	int *array1, i, j;
	
	
	printf("Please enter five integers for the array:\n");
	for (i=0; i < 5; i++) {
		scanf("%d", &j);
		array1[i] = j;
	}
	
	for (i=0; i < 5; i++) {
		printf("a[%d] = %3d, &a[%d] = %p\n", i, array1[i], i, &array1[i]);
	}
	
	
    return 0;
}
