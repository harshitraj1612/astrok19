#include <stdio.h>

int main(void)
{
	int number;

	printf("Enter a number: ");
	if (scanf("%d", &number) != 1) {
		fprintf(stderr, "Invalid input. Please enter an integer.\n");
		return 1;
	}

	for (int i = 1; i <= 10; i++) {
		printf("%d x %d = %lld\n", number, i, (long long) number * i);
	}

	return 0;
}
