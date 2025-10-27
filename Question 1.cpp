#include<stdio.h>

void decimalToBinary(int num);

int main() {
	int accessCode;
	printf("Enter the decimal access code: ");
	scanf("%d", &accessCode);
	printf("The binary equivalent of %d is: ", accessCode);
	decimalToBinary(accessCode);
	return 0;
}

void decimalToBinary(int num) {
	int binary[32];
	int i = 0;
	if (num == 0) {
		printf("0");
		return;
	}
	while (num > 0) {
		binary[i] = num % 2;
		num = num / 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--) {
		printf("%d", binary[j]);
	}
	printf("\n");
}

