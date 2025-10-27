#include<stdio.h>

int findHCF(int a, int b);
int findLCM(int a, int b);

int main() {
	int a, b, choice, result;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	printf("\nPress 1 for HCF");
	printf("\nPress 2 for LCM\n");
	scanf("%d", &choice);
	
	if (choice == 1) {
		result = findHCF(a, b);
		printf("HCF of %d and %d is: %d", a, b, result);
	}
	else if (choice == 2) {
		result = findLCM(a, b);
		printf("LCM of %d and %d is: %d", a, b, result);
	}
	else {
		printf("Invalid choice.");
	}
	
	return 0;
}

int findHCF(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int findLCM(int a, int b) {
	return (a * b) / findHCF(a, b);
}

