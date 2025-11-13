#include<iostream>
int main(){
    int arr[] = {5, 3, 9, 7, 9};
    int max = arr[0];
    int secondMax = arr[0];

    for(int i = 1; i < 5; i++){
        if(arr[i]  > max){
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i] > secondMax && arr[i]!= max){
            secondMax = -1;
        }

    }
    cout<< "second largest: "<< secondMax << endl;
    return 0;
}