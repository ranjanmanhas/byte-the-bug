#include <stdio.h>
int main(){
	int i, num;
	 double long  fact = 1;

	 printf("enter  a number :");
	 scanf("%d", &num);

	 if(num ==  0){
		 printf(" %d", num);
	 }else {
	 for( int i = 1; i<=num ; i++){
		 fact = fact *i;

	 }
	 printf("factorial of %d = %ld \n", num, fact);
	 }
	 return 0;

}