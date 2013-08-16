#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int diceRoll(int k) {
	srand(k);
	int q = (1 + (rand() % 6));
	return q;
	
}


int main () {
	int die1, die2, sum1, sum2 = 0;
	
	die1 = diceRoll(time(NULL));
	
	die2 = diceRoll(rand());
	
	sum1 = die1 + die2;
	
	printf("Player rolled %d + %d = %d\n", die1, die2, sum1);
	
	if (sum1 == 7 || sum1 == 11)
		printf("Player wins\n");
	else if (sum1 == 2 || sum1 == 3 || sum1 == 12)
		printf("Player loses\n");
	else
	{
		printf("Point is %d\n", sum1);
	
		while(sum2 != sum1 && sum2 != 7)
		{
			die1 = diceRoll(rand()+1);
			die2 = diceRoll(rand()+2);
			sum2 = die1 + die2;
			printf("Player rolled %d + %d = %d\n", die1, die2, sum2);
			
		}
		if (sum2 == 7)
			printf("Player loses\n");
		else {
			printf("Player wins\n");
		}

	}
	
    return 0;
}
