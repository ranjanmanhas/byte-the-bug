#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = {
        {1 ,2, 3} ,
        {2, 4, 5} ,
        {3, 5, 6}    
    }; 

    int i, j, flag = 0;

    for (i=0; i<3; i++) {
        for (j = 0; j<3 ; j++){
            if ( arr[i][j] != arr[j][i]) {
                flag=1;
                break;
            }
        }
    }

    if (flag == 1) 
        printf("Matrix is not symmetrical \n");
    else
        printf("Matrix is symmetrical\n");

    return 0;
}
