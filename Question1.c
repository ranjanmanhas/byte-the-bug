#include<stdio.h>

int main()
{
	int i;num;
	long long fact = 1;

	printf("enter num number:");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		fact = fact * i;


		printf("factorial of %d =%lld\n", num, fact);
	}
	return o;
}