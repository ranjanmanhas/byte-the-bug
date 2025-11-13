#include<io stream>
using namespace std;
int main(){
    int a[3][3]{
        {1,2,3}
        {2,4,6}
        {3,5,6}
int i,j,flag=0;
for(j=0;j,3;j++){
    if(a[i][j]!=a[j][i])
    flag=1;
    break;
}


        }
}
if(flag==1){
cout<<"Marks is not symmertical\n")<<endl;
cout<<("Matrix is symmertrical\n")<<endl;
}
return 0;
