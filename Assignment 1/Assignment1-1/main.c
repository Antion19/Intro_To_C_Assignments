#include <stdio.h>

int main ()
{
int pollutant;
double emissions_per_mile, odometer_reading, limit;
    
printf("Enter pollutant number: 1 for carbon monoxide,\n");
printf("2 for hydrocarbons, 3 for nitrogen oxides, and\n");
printf("4 for nonmethane hydrocarbons\n");
scanf("%d", &pollutant);

printf("Enter number of grams emitted per mile ");
scanf("%lf", &emissions_per_mile);

printf("Enter odometer reading in miles ");
scanf("%lf", &odometer_reading);
	
if (odometer_reading <= 50000 && odometer_reading >= 0) 
	{
	if (pollutant == 1)
		{
			limit = 3.4;
			
			if (emissions_per_mile < limit && emissions_per_mile >= 0)
				printf("Emissions within permitted level of %.2f grams/mile\n", limit);
				
			else if (emissions_per_mile > limit)
				printf("Emissions exceed permitted level of %.2f grams/mile\n", limit);
				
			else if (emissions_per_mile == limit)
				printf("Emissions at maximum permitted level of %.2f grams/mile\n", limit);
			else
				printf("Invalid emission\n");
		}
	else if (pollutant == 2)	
		{
			limit = 0.31;
			
			if (emissions_per_mile < limit && emissions_per_mile >= 0)
				printf("Emissions within permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile > limit)
				printf("Emissions exceed permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile == limit)
				printf("Emissions at maximum permitted level of %.2f grams/mile\n", limit);
			else
				printf("Invalid emission\n");
		}
	else if (pollutant == 3)
		{
			limit = 0.4;
			
			if (emissions_per_mile < limit && emissions_per_mile >= 0)
				printf("Emissions within permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile > limit)
				printf("Emissions exceed permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile == limit)
				printf("Emissions at maximum permitted level of %.2f grams/mile\n", limit);
			else
				printf("Invalid emission\n");
		}
	else if (pollutant == 4)
		{
			limit = 0.25;
			
			if (emissions_per_mile < limit && emissions_per_mile >= 0)
				printf("Emissions within permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile > limit)
				printf("Emissions exceed permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile == limit)
				printf("Emissions at maximum permitted level of %.2f grams/mile\n", limit);
			else
				printf("Invalid emission\n");
		}
	else
		printf("Invalid pollutant number\n");
	}


else if (odometer_reading > 50000)
		
	{
		if (pollutant == 1)
		{
			limit = 4.2;
			
			if (emissions_per_mile < limit && emissions_per_mile >= 0)
				printf("Emissions within permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile > limit)
				printf("Emissions exceed permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile == limit)
				printf("Emissions at maximum permitted level of %.2f grams/mile\n", limit);
			else
				printf("Invalid emission\n");
		}
		else if (pollutant == 2)	
		{
			limit = 0.39;
			
			if (emissions_per_mile < limit && emissions_per_mile >= 0)
				printf("Emissions within permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile > limit)
				printf("Emissions exceed permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile == limit)
				printf("Emissions at maximum permitted level of %.2f grams/mile\n", limit);
			else
				printf("Invalid emission\n");
		}
		else if (pollutant == 3)
		{
			limit = 0.5;
			
			if (emissions_per_mile < limit && emissions_per_mile >= 0)
				printf("Emissions within permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile > limit)
				printf("Emissions exceed permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile == limit)
				printf("Emissions at maximum permitted level of %.2f grams/mile\n", limit);
			else
				printf("Invalid emission\n");
		}
		else if (pollutant == 4)
		{
			limit = 0.31;
			
			if (emissions_per_mile < limit && emissions_per_mile >= 0)
				printf("Emissions within permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile > limit)
				printf("Emissions exceed permitted level of %.2f grams/mile\n", limit);
			
			else if (emissions_per_mile == limit)
				printf("Emissions at maximum permitted level of %.2f grams/mile\n", limit);
			else
				printf("Invalid emission\n");
		}
		else
			printf("Invalid pollutant number\n");
	}
	
else
	printf("Invalid odometer reading\n");
	
    return 0;
}
