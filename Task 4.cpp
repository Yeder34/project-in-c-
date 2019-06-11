#include<iostream>
using namespace std;
main()
{
	int arr[5];
	int i=0;
	int sum=0;
	cout<<"Enter the elements of an array :";
	for(i=0;i<5;i++)
	cin>>arr[i];
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"The sum of elements are :"<<sum;
	return 0;
}
