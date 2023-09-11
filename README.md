# DAA
Assignment 1:<br>
Problem Statement:<br> 
Given an Array of 1s and 0s which as all 1s followed by all 0s. Find the number of 0s. <br>
Count the number of zeroes in the given array.<br>
<b>Input</b> arr[]={1,1,1,1,0,0}
<b>Output</b>:2
<b>Code<b> <br>
#include<iostream><br>
using namespace std;<br>
int countzero(int arr[],int n)<br>
{<br>
	int low=0;<br>
	int high=n-1;<br>
	while(low<=high)<br>
	{<br>
		int middle=(low+high)/2;<br>
		if(arr[middle]==1)<br>
		{<br>
			low=middle+1;<br>
		}<br>
		else<br>
		{<br>
			high=middle-1;<br>
		}<br>
	}<br>
	return n-low;<br>
}<br>
int main()<br>
{<br>
	int n;<br>
	int arr[100];<br>
	cout<<"\nEnter the size of array";<br>
	cin>>n;<br>
	cout<<"\nEnter the array elements";<br>
	for(int i=0;i<n;i++)<br>
	{<br>
		cin>>arr[i];<br>
	}<br>
	int numzero=countzero(arr,n);<br>
	cout<<"Number of zero's is:"<<numzero;<br>
	return 0;<br>
	
}<br>
<br>
<b>Output<b><br>
Enter the size of array6<br>

Enter the array elements1<br>
1
1
1
0
0<br>
Number of zero's is:2



