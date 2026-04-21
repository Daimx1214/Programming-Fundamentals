#include<iostream>
using namespace std;

int main(){
	int arr1[5];
	int arr2[5];
	int sum[5];
	cout<<"Emter the elements of first array:";
	for(int i = 0; i < 5; i++)
	{
		cin>>arr1[i];
	}
	cout<<"Emter the elements of second array:";
	for(int i = 0; i < 5; i++)
	{
		cin>>arr2[i];
	}
	for(int i = 0; i < 5; i++)
	{
		sum[i] = arr1[i] + arr2[i];
		//cout<<"The sum of arrays at "<<i<<" are: "<<sum[i]<<endl;
		cout<<sum[i]<<"  ";
	}
	
	return 0;
}