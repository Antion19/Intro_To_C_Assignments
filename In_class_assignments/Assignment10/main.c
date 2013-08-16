#include <stdio.h>

void testing(void);
void testing2(void);


int main () {
    
	
	int i, number1, number2;
	double sum;
	typedef struct student_info {
		int ssn;
		char name[10];
		double GPA;
	} student_info;
	
	testing();
	
	FILE *input, *output;
	
	input = fopen("input.dat", "r");
	output = fopen("output.dat", "w");
	
	student_info student[4];
	
	fscanf(input, " %d %s %lf", &student[0].ssn, student[0].name, &student[0].GPA);
	for (i=1; student[i-1].ssn != 0 ; i++) {
		fscanf(input, " %d %s %lf", &student[i].ssn, student[i].name, &student[i].GPA);
	};
	
	for (i = 0; i < 4; i++) {
		sum += student[i].GPA;
	};
	
	fprintf(output, "GPA average is %f\n", sum/4.0);
	
	number1 = number2 = 0;
	for (i = 1; i < 4; i++) {
		if (student[i].GPA < student[number1].GPA)
			number1 = i;
		else if (student[i].GPA > student[number2].GPA)
			number2 = i;
	}
	
	fprintf(output,"The Minimum GPA %s's %f\nThe maximum GPA is %s's %f\n",
		   student[number1].name, student[number1].GPA,
		   student[number2].name, student[number2].GPA);
	
	fclose(input);
	fclose(output);
	
	testing2();
	
    return 0;
}


void testing(void) {
	
	FILE *h;
	h = fopen("input.dat", "w");
	fprintf(h, "1 james 3.0\n");
	fprintf(h, "2 bob 2.5\n");
	fprintf(h, "3 alice 3.5\n");
	fprintf(h, "4 joy 3.8\n");
	fprintf(h, "0\n");
	
	fclose(h);
	
};

void testing2(void) {
	
	FILE *g;
	g = fopen("output.dat", "r");
	
	int status;
	char ch;
	
	for (status = fscanf(g, "%c", &ch);
		 status != EOF; status = fscanf(g, "%c", &ch)) {
		printf("%c", ch);
	};
	
	fclose(g);
	
};