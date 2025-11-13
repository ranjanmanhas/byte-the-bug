#include<iostream>
using namespace std;

int main (){
    int arr []={5,3,9,7,9};
    int max = arr[0];
    int secondMax=max ;
    max=arr[i];
    for (int i=1;i<=5;i++)
    if(arr[i]>secondMax && arr[i] !=max){
        secondMax = arr[i];

    }

cout<<"second largest"<<secondMax<<endl;
return 0;
}