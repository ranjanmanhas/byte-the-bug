#include <stdio.h>
int main(){
    int i,num;
    long long fact=1;
    printf ("enter the the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    fact = fact*i;
    printf("factorial of %d=%11d\n",&num,&fact) ;
    return 0;
}