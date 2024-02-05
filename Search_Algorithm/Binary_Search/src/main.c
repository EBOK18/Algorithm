#include <stdio.h>

int main() {
	int input;

	printf("Enter number to find from 1 - 15: ");
	scanf("%i", &input);

	int A[15];
	for(int i = 0; i < 15; i++)
		A[i] = i+1;

	int start = 0;
	int end = 15 - 1;
	int i = 0;
	int j = 0;
	int k = 0;

	while(1) {
		if(A[end] < input || input < A[start]) {
			printf("Your input is not in the array!\n");
			break;
		}

		i = (start + end) / 2;
		
		printf("\nValue: \n");
		for(j = start; j <= end; ++j) {
			k+=1;
			printf("%d\t", A[j]);

			if(k == 3) {
				printf("\n");
				k = 0;
			}
		}

		printf("\nAt Index: %d\n", i);
		printf("Start Index: %d\n", start);
		printf("End Index: %d\n", end);

		if(A[i] < input) start = i + 1;
		else end = i - 1;	
	
		if(A[i] == input) {
			printf("\nFound It!\n");
			printf("Value: %d\n", A[i]);
			printf("At Index: %d\n", i);
			printf("Start Index: %d\n", start);
			printf("End Index: %d\n", end);
			
			break;
		}
	}

	return 0;
}
