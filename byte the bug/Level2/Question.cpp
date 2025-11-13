#include <iostream>
using namespace std;
int main(){
    int arr[]={5,3,9,7,9};
    int max=arr[0];
    int secondMax = arr[0];
    
    for(int i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]>secondMax && arr[i] !=max){
            secondMax = arr[i];
        }
        
    }
    cout<<"Max value is :"<<max<<endl;
    cout<<"Second Max value is :"<<secondMax<<endl;
}