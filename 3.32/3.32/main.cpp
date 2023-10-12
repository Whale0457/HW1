#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float height = 0;
	float weight = 0;
	float bmi = 0;
	printf("Please enter your height(meter):");
	scanf("%f", &height);
	printf("Please enter your weight(kilogram):");
	scanf("%f", &weight);
	bmi = weight / (height*height);
	printf("BMI=%.2f\n", bmi);

	if (bmi < 18.5) printf("Underweight!\n");
	if (bmi >= 18.5&&bmi <= 24.9) printf("Normal!\n");
	if (bmi >= 25 && bmi <= 29.9) printf("Overweight!\n");
	if (bmi >= 30) printf("Obese!\n");


	printf("\n\nBMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5and 24.9\n");
	printf("Overweight:  between 25and 29.9\n");
	printf("Obese:       30 or greater\n");



	return 0;
}
