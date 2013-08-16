#include <stdio.h>

int main (void) {
	int num1, num2;
	char sign;
	
    printf("Please enter two integers with + or -:");
	scanf("%d %c %d", &num1, &sign, &num2);
	
	if (sign == '+')
		printf("%d plus %d equals %d \n", num1, num2, num1 + num2);
	else if (sign == '-')
		printf("%d minus %d equals %d \n", num1, num2, num1 - num2);
	else
		printf("Invalid input");
    return 0;
}
