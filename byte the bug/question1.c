#include <stdio.h>

 int main() {
    int i, num;
    long long fact = 1;

     printf("Enter a number");
     scanf("%d, &num");

      for(i = 1; i <=num; 1++);
         fact = fact * i;

       printf("Factorial of %d = %11d\n", num, fact);
       return 0;
 }
