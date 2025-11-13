#include<stdio.h>

int main(){

    int i, num;
    long long fact=1;

    printf("Enter a number:");
    scanf("%d",&num);
// here for loop was not having curly brackets
    for (i=1;i<=num;i++){

        fact=fact*i;

    }

    printf("Factorial of %d = %lld\n", num, fact);
    return 0;
}