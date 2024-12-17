// Calculator in C

#include <stdio.h>

// Functions for Addition, Subtraction, Multiplication, Division

// Declare types
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
	int choice;
	float num1, num2, result;
	char continue_choice;
	
	do {
	// User Menu
	printf("\nSelect type of operation:\n");
	printf("1. Add\n");
	printf("2. Subtract\n");
	printf("3. Multiply\n");
	printf("4. Divide\n");
	printf("Enter your choice (1-4): ");
	scanf("%d", &choice);

	// Enter numbers
	printf("Enter the first number: "); 
	scanf("%f", &num1);
	printf("Enter the second number: ");
	scanf("%f", &num2);

	// switch conditional
	switch (choice) {
		case 1:
			result = add(num1, num2);
			printf("Result: %.2f\n", result);
			break;
		case 2:
			result = subtract(num1, num2);
			printf("ResultL %.2f\n", result);
			break;
		case 3:
			result = multiply(num1, num2);
			printf("ResultL %.2f\n", result);
			break;
		case 4:	
			if (num2 != 0) {
			result = divide(num1, num2);
			printf("Result: %.2f\n", result);
			} else {
				printf("Error: Division by zero is not allowed.\n");
			}
			break;
		default:
			printf("Invalid choice.\n");
		}

		// Program exit or loop
		printf("\nDo you want to perform another calculation? (y/n): ");
		scanf(" %c", &continue_choice);
	
	} while (continue_choice == 'y' || continue_choice == 'Y');
	
	printf("Goodbye!\n");
	return 0;
}

// Function Definitions
float add(float a, float b) {
	return a + b;
}

float subtract(float a, float b) {
	return a - b;
}

float multiply(float a, float b) {
	return a * b;
}

float divide(float a , float b) {
	return a / b;
}

