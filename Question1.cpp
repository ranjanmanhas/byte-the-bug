#include<stdio.h>

int main(){
    int a[3][3]={
        i,2,3,
        2,4,5,
        3,5,6}

    };
    int i,j,flag=0;

    for(i=0;i<3;i++){
        if(a[i][j]!=a[j][i]){
            flag=1;
            break;
        }
    }

    if (flag==1){
        printf("matrix is not symmetric\n");

    }
    else{
        printf("matrix is symmetric\n");

    }
    return 0;
}