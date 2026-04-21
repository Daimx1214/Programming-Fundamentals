#include<iostream>
using namespace std;
int *sumArray(int size, int arr1[], int arr2[], int sum[]);
int main(){
	int *result ;
	int size;
	int arr1[size];
	int arr2[size];
	int sum[size];
	cout<<"Enter the size of the array:"; 
	cin>>size;
	cout<<"Enter the elements of first array:";
	for(int i = 0; i < size; i++)
	{
		cin>>arr1[i];
	}
	cout<<"Enter the elements of second array:";
	for(int i = 0; i < size; i++)
	{
		cin>>arr2[i];
	}
	result = sumArray(size, arr1, arr2, sum);

	for(int i=0;i<size;i++){
		cout<<result[i]<<endl;
}
	return 0;
}
int *sumArray(int size, int arr1[], int arr2[], int sum[])
{
	for(int i = 0; i < size; i++)
	{
		sum[i] = arr1[i] + arr2[i];
	}
	
	return sum;
}