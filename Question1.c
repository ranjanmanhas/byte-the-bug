#include<stdio.h>
int main() {
	int i, num;
	double long fact = 1;
	printf("enter the number:");
	scanf("%d", &num);
	for (i = 1;i <= num;i++1) {
		fact = fact * i;
		printf("factorial of %d= %ld\n", num, fact);
	}
	return 0;
}
