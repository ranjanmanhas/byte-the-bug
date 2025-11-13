#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,9,7,9};
    int max = arr[0];
    int secondmax = arr[0];
    for( int i=1; i<5;i++;){
        if(array[i]>max){
            secondmax= max;
            max = array[i];
          }  }
        else{
            if(arr[i]> secondmax && arr[i] !=max){
        secondmax = arr[i];
            }}
            cout <<"second largest:"<< secondmax <<endl;
            return 0;
        }