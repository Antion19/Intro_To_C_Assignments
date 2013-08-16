#include <stdio.h>

int main ()
{
	double x_coordinate, y_coordinate;
	
	printf("Enter the x coordinate\n");
	scanf("%lf", &x_coordinate);
	
	printf("Enter the y coordinate\n");
	scanf("%lf", &y_coordinate);
	
	if (x_coordinate > 0)
	{
		if (y_coordinate > 0)
			printf("(%f,%f) is in quadrant I\n", x_coordinate, y_coordinate);
			
		else if (y_coordinate < 0)
			printf("(%f,%f) is in quadrant IV\n", x_coordinate, y_coordinate);
			
		else
			printf("(%f,%f) is on the x-axis\n", x_coordinate, y_coordinate);
	}
	
	else if (x_coordinate < 0)
	{
		if (y_coordinate > 0)
			printf("(%f,%f) is in quadrant II\n", x_coordinate, y_coordinate);
		
		else if (y_coordinate < 0)
			printf("(%f,%f) is in quadrant III\n", x_coordinate, y_coordinate);
		
		else
			printf("(%f,%f) is on the x-axis\n", x_coordinate, y_coordinate);
	}
	
	else
	{
	if (y_coordinate == 0)
		printf("(%f,%f) is the origin\n", x_coordinate, y_coordinate);
		
	else
		printf("(%f,%f) is on the y-axis\n", x_coordinate, y_coordinate);
	}
	
	return 0;
}
