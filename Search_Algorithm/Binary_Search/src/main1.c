#include <stdio.h>

_Bool bs(int A[], int start, int end, int input);

int main() {
	int input;

	printf("Enter number to find from 1 - 100: ");
	scanf("%i", &input);

	int A[100];
	for(int i = 0; i < 100; i++)
		A[i] = i+1;

	int start = 0;
	int end = 100 - 1;

	int res = bs(A, start, end, input);

	if(res == 0) printf("\nYour input is not in the array!\n");
	else {
		printf("\nYou found it!\n");	
	}

	return 0;
}

_Bool bs(int A[], int start, int end, int input) {
	printf("\n");

	if(A[end] < input || input < A[start]) return 0;

	int i = (start + end) / 2;
		
	if(A[i] < input) {
		printf("Value is Lower!\n");
		printf("Value: %i\n", A[i]);
		printf("At Index: %i\n", i);

		start = i + 1;
		bs(A, start, end, input);
	} else if(A[i] > input) {
		printf("Value is Higher!\n");
		printf("Value: %i\n", A[i]);
		printf("At Index: %i\n", i);

		end = i - 1; 
		bs(A, start, end, input);
	} else {
		printf("Value: %i\n", A[i]);
		printf("At Index: %i\n", i);

		return 1;
	}

}
