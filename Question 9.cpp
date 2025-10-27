#include<stdio.h>

float calculateTotal(float price, int quantity);

int main() {
	char name[50], item[50];
	int n, quantity, i;
	float price, total = 0;

	printf("Enter customer name: ");
	gets(name);
	
	printf("Enter number of items: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("\nEnter item name: ");
		scanf("%s", item);
		printf("Enter quantity: ");
		scanf("%d", &quantity);
		printf("Enter price per unit: ");
		scanf("%f", &price);
		
		total += calculateTotal(price, quantity);
	}
	
	printf("\nCustomer Name: %s", name);
	printf("\nTotal Bill: %.2f", total);
	
	return 0;
}

float calculateTotal(float price, int quantity) {
	return price * quantity;
}

