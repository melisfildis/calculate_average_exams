// This is a C programing language code

#include<stdio.h>

int main(void) {
	int student_id, student_num, exam, n;
	double average, midterm1, midterm2, final;
	double max_avg = 0.00;
	int stu_no = 0;
	printf("How many students take this course? : ");
	scanf("%d", &student_num);

	for (n = 0; n < student_num; n++) {//n is for student number
		printf("Enter students ID:");
		scanf("%d", &student_id);
		for (exam = 0; exam < 1; exam++) {//inner loop
			printf("Enter three grades: ");
			scanf("%lf %lf %lf", &midterm1, &midterm2, &final);
		}
		average = midterm1 * 20 / 100 + midterm2 * 30 / 100 + final * 50 / 100;//calculation of average
		if (average > max_avg) {//if statement to find maximum average
			max_avg = average;
			stu_no = student_id;
		}

	}
	printf("Student %d has the higher average %.2lf: ", stu_no, max_avg);
	return 0;
}
