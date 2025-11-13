#include<iostream>
using namespace std;

int main()
{
	int arr[] = {5,3,9,7,9};
	int max = arr[0];
	int secondMax = arr[1];

	for(int i= 1; i<5;i++)
	{
		if(arr[i]>max)
		{
			secondMax=max;
			max=arr[i];

		}
		elseif(arr[i]> secondMax && arr[i]!=max)
		{
			secondMax = -1;
		}
	}
	cout<<"Second largest: "<< secondMAx <<endl;
	return 0;
}