#include <stdio.h>

int square(int a)
{
	int c;
	c = a*a;
	return c;
}

int maximum(int a, int b, int c)
{
	int g;
	if (a >= b && a >= c)
		g = a;
	else if (b > a && b >=c)
		g = b;
	else
		g = c;
	return g;
}

int main () {
	int i, b, x, y, z;
    for(i = 1; i <= 10; i++){
		b = square(i);
	printf("%d squared is %d\n",i,b);
	}
	printf("Enter three integers:\n");
	scanf("%d %d %d", &x, &y, &z);
	printf("The maximum value of %d, %d, and %d is %d\n",x, y, z, maximum(x, y, z));
	
    return 0;
}
