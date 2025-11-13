#include<stdio.h>

 int main() {
     int arr[3][3] = {
        {1,2,3},
        {2,3,4},
        {3,4,5}
     }
     int i,j,flag=0;
     for (int i=0; i<3;i++) {
        for (int j=0; j<3;j++)  {
            if(a[i][j] != a[i][j]) {
                flag = i;
                break;
            }
        }
        if (flag==1) {
            printf("sys");
        }
        else {
            printf("non");
        }
     }
     return 0;
    }
 