#include<iostream.h>
using namespace std;

 int main()
 {
	 int a[3][3]={
		 {1,2,3},
		 {2,4,5},
		 {3,5,6}
	 };
	 int i, j, flag=0;

	 for(i =0;i<3;i++)
	 {
		 for(j=0;j<3;j++)
		 {
			 if(a[i][j]!=a[j][i])
			 {
				 flag=1;
				 break;
			 }
			 
		 }
	 }

	 if(flag==1)
	 {
		 cout<<"Matrix is not symmetric";

	 }
	 else{
		 cout<<"Matrix is Symmetric";
	 }
	 return 0;
 }