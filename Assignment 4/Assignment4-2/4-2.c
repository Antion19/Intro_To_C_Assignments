#include <stdio.h>
#include <string.h>
#define linenumber 25


int main () {
	
	
	FILE *input, *output;
	
	/* begin getting number of lines*/
	
	input =  fopen ("input.dat", "r");
	
	int lines, i, j, k;
	char b;
	
	for (i = fscanf(input, "%c", &b);
		 i != EOF; i = fscanf(input, "%c", &b)) {
		if (b == '\n')
			lines += 1; 
	};
	
	fclose(input);
	
	/* end getting number of lines*/
	
	input =  fopen ("input.dat", "r");
	output = fopen("output.dat", "w");
	
	int length[linenumber];
	char word[linenumber][20];
	
	/* begin using number of lines to get infomration from file*/
	
	for (i=0; i <= lines; i++) 
		{
			fscanf(input, " %d", &length[i]);
			if (length[i] != 0)
			{
				for (j=0; j < length[i] ; j++)
				{
					fscanf(input, " %c", &word[i][j]);
				};
					word[i][length[i]] = '\0';
			}
		else
			{
			word[i][0] = '\0';
			}
		};
	
	/* end using number of lines to get infomration from file*/
	
	/* begin process of making output file*/
	
	for (j=0; j<i; j++)
	{
		for (k=j+1; k<i; k++)
		{
			if (length[j] == length[k])
			{
				if (strcmp(word[j], word[k]) == 0)
				{
					fprintf(output, "%s\n", word[j]);
				}
			}
		};
		
	};
	
	/* end process of making output file*/
	
	fclose(input);
	fclose(output);
	
    return 0;
}
