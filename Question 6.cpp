#include<stdio.h>

void inputMatrix(int matrix[10][10], int rows, int cols);
void multiplyMatrices(int a[10][10], int b[10][10], int result[10][10], int r1, int c1, int c2);
void displayMatrix(int matrix[10][10], int rows, int cols);

int main() {
	int a[10][10], b[10][10], result[10][10];
	int r1, c1, r2, c2;
	
	printf("Enter rows and columns for first matrix: ");
	scanf("%d %d", &r1, &c1);
	
	printf("Enter rows and columns for second matrix: ");
	scanf("%d %d", &r2, &c2);
	
	if (c1 != r2) {
		printf("Matrix multiplication not possible.");
		return 0;
	}
	
	printf("Enter elements of first matrix:\n");
	inputMatrix(a, r1, c1);
	
	printf("Enter elements of second matrix:\n");
	inputMatrix(b, r2, c2);
	
	multiplyMatrices(a, b, result, r1, c1, c2);
	
	printf("\nResultant Matrix:\n");
	displayMatrix(result, r1, c2);
	
	return 0;
}

void inputMatrix(int matrix[10][10], int rows, int cols) {
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
}

void multiplyMatrices(int a[10][10], int b[10][10], int result[10][10], int r1, int c1, int c2) {
	int i, j, k;
	for (i = 0; i < r1; i++) {
		for (j = 0; j < c2; j++) {
			result[i][j] = 0;
			for (k = 0; k < c1; k++) {
				result[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

void displayMatrix(int matrix[10][10], int rows, int cols) {
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			printf("%4d", matrix[i][j]);
		}
		printf("\n");
	}
}

