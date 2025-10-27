#include<stdio.h>
void swapArrays(int *a, int *b, int size);
int main() {
	int i, j;
	int lahore[] = {11,22,33,44,55};
	int karachi[] = {66,77,88,99,100};
	int size = 5;
	printf("Before swapping: ");
	printf("\nLahore: ");
	for (i = 0; i < size; i++) {
		printf("%d\t", lahore[i]);
	}
	printf("\nKarachi:");
	for (j = 0; j < size; j++) {
		printf("%d\t", karachi[j]);
	}
	
	swapArrays(lahore, karachi, size);
	
	printf("\nAfter swapping: ");
	printf("\nLahore: ");
	for (i = 0; i < size; i++) {
		printf("%d\t", lahore[i]);
	}
	printf("\nKarachi:");
	for (j = 0; j < size; j++) {
		printf("%d\t", karachi[j]);
	}
}

void swapArrays(int *a, int *b, int size) {
	int i;
	for (i = 0; i < size; i++) {
	
	int swap = a[i];
	a[i] = b[i];
	b[i] = swap; }
		
}
