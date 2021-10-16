#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

double num1;
double num2;

void add() {
	printf("Enter first number to add: \n");
	scanf("%lf", &num1);
	printf("Enter second number to add: \n");
	scanf("%lf", &num2);
	printf("answer:\t %f\n", num1 + num2);
}

void sub() {
	printf("Enter first number to subtract: \n");
	scanf("%lf", &num1);
	printf("Enter second number to subtract: \n");
	scanf("%lf", &num2);
	printf("answer:\t %f\n", num1 - num2);
}

void multi() {
	printf("Enter first number to multiply: \n");
	scanf("%lf", &num1);
	printf("Enter number to multiply by: \n");
	scanf("%lf", &num2);
	printf("answer:\t %f\n", num1 * num2);
}

void divide() {
	printf("Enter first number to divide: \n");
	scanf("%lf", &num1);
	printf("Enter number to divide by: \n");
	scanf("%lf", &num2);
	printf("answer:\t %f\n", num1 / num2);
}

void ranint() {
	printf("%d\n", rand() % 100);
}

int main() {

	int sel;

	printf("welcome to cCalc by VelocityStreaks! | PI: %f\n", PI);
	printf("[0] add\n");
	printf("[1] subtraact\n");
	printf("[2] mutliply\n");
	printf("[3] divide\n");
	printf("[4] rand int(0, 100)\n");

	scanf("%d", &sel);

	switch(sel) {
		case 0:
		add();
		break;

		case 1:
		sub();
		break;

		case 2:
		multi();
		break;

		case 3:
		divide();
		break;

		case 4:
		ranint();
		break;
	}

	return 0;
}