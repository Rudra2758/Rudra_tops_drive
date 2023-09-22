#include<stdio.h>
int main(){
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
{;

	// first loop for printing rows
	for (int i = 0; i < rows; i++) {

		// second loop for printing number in each rows
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
}

