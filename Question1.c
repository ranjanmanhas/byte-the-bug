#include <stdio.h>

int main(){
    int i , num ;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (i=0; i<=num;i++){
    fact = fact*i;
    printf("Factorial of %d num = %ldfact\n"); }
    return 0;
}