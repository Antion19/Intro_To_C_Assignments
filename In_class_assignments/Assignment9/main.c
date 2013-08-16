#include <stdio.h>

int main (int argc, const char * argv[]) {
   
	int i, number1, number2;
	double sum;
	typedef struct student_info {
		int ssn;
		char name[10];
		double GPA;
	} student_info;
	
	struct student_info student[4] = {{1, "james", 3.0}, {2, "bob", 2.5},
		{3, "alice", 3.5}, {4, "joy", 3.8}};
	
	for (i = 0; i < 4; i++) {
		sum += student[i].GPA;
	}
	printf("GPA average is %f \n", sum/4.0);
	
	number1 = number2 = 0;
	for (i = 1; i < 4; i++) {
	if (student[i].GPA < student[number1].GPA)
			number1 = i;
	else if (student[i].GPA > student[number2].GPA)
			number2 = i;
	}
	
	printf("The Minimum GPA %s's %f\nThe maximum GPA is %s's %f\n",
		   student[number1].name, student[number1].GPA,
		   student[number2].name, student[number2].GPA);
	
    return 0;
}
