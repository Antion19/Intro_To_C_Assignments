#include <stdio.h>

int main () {
	
	int n, j = 1, k, l = 1;
	
	printf("Enter value for n: ");
	scanf("%d", &n);
	
	while(j <= 9) {
		printf("%d X %d = %d \n", n, j, n*j);
		j = j + 1;
	}
	
	for (k = 1; k <= 9; k = k + 1) {
		printf("%d X %d = %d \n", n, k, n*k);
	}
	
	do {
		printf("%d X %d = %d \n", n, l, n*l);
	} while(++l <= 9);
	
    return 0;
}

