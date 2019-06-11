#include<iostream>
using namespace std;
main()
{
	int arr[5];
	int i;
	int l=0;
	int s=0;
	cout<<"Enter the elements :";
	for(i=0;i<5;i++)
	cin>>arr[i];
	l=arr[0];
	for(i=0;i<5;i++)
	if(l<arr[i])
	{
		l=arr[i];
	}
	s=arr[0];
	for(i=0;i<5;i++)
	if(s>arr[i])
	{
		s=arr[i];
	}
	cout<<"Largest number :"<<l;
	cout<<"\nSmallest number:"<<s;
	
	
}
