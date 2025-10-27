#include<stdio.h>
#include<stdlib.h>

void generateImage(int image[8][8]);
void brightenImage(int image[8][8], int brightened[8][8]);
void displayImage(int image[8][8]);

int main() {
	int image[8][8];
	int brightened[8][8];
	
	generateImage(image);
	brightenImage(image, brightened);
	
	printf("Original Image:\n");
	displayImage(image);
	
	printf("\nBrightened Image:\n");
	displayImage(brightened);
	
	return 0;
}

void generateImage(int image[8][8]) {
	int i, j;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			image[i][j] = rand() % 256;
		}
	}
}

void brightenImage(int image[8][8], int brightened[8][8]) {
	int i, j;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			brightened[i][j] = image[i][j] + 20;
			if (brightened[i][j] > 255) {
				brightened[i][j] = 255;
			}
		}
	}
}

void displayImage(int image[8][8]) {
	int i, j;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			printf("%4d", image[i][j]);
		}
		printf("\n");
	}
}
