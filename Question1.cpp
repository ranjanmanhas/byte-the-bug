#include < iostream>
using namespace std;

int main(){
	int arr[3][3] = {
		{ 1, 2, 3},
		{2,4,5},
		{3,5,6}
	};
	 int flag = 0;
	 
	 for(int i = 0; i< 3; i++){
		 for( int j = 0; j<i; j++) {
			  if( arr[i][j] != arr[j][i]){
			 flag = 1;
			 break;

		 }
	 }
	 }
if( flag == 1) 
cout<<" matrix  is  not symmatric \n";
else 
cout<<" matrix is symmatric ";
 retun 0;
}