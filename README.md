# DAA
Assignment 1:
Problem Statement:<br> 
Given an Array of 1s and 0s which as all 1s followed by all 0s. Find the number of 0s. <br>
Count the number of zeroes in the given array.<br>
<b>Input</b> arr[]={1,1,1,1,0,0}
<b>Output</b>:2
<b>Code<b> <br>
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
<br>
<b>Output<b>
Enter the size of array6

Enter the array elements1
1
1
1
0
0
Number of zero's is:2


