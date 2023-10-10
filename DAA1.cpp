#include<iostream>
using namespace std;
int countzero(int arr[],int n)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int middle=(low+high)/2;
		if(arr[middle]==1)
		{
			low=middle+1;
		}
		else
		{
			high=middle-1;
		}
	}
	return n-low;
}
int main()
{
	int n;
	int arr[100];
	cout<<"\nEnter the size of array";
	cin>>n;
	cout<<"\nEnter the array elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int numzero=countzero(arr,n);
	cout<<"Number of zero's is:"<<numzero;
	return 0;
	
}
