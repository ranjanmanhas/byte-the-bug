#include<stdio.h>
int main(){
    int a[3][3]={
        (1,2,3),
        (2,4,5),
        (3,5,6)
    };
    int i,j,flag = 0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if (a[i][j]!= a[i][j]){
                flag=1;
                break;

            }
        }
    }
    if (flag==1)
      printf("matrix is not symmetric");
    else
      printf("matrix is symmetric");

return 0;
}