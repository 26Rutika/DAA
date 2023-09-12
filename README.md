# DAA 
Assignment 1:<br>
Problem Statement:<br> 
Given an Array of 1s and 0s which as all 1s followed by all 0s. Find the number of 0s. <br>
Count the number of zeroes in the given array.<br>
<b>Input</b> arr[]={1,1,1,1,0,0}
<b>Output</b>:2
<b>Code<b> <br>
#include &lt;iostream&gt;<br>
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
Number of zero's is:2<br>
<p>To slove these problem we have use divide and conquer strategy.In which we have use <b>Binary Search</b></p>
<p>First simple approach which I used to slove these problem was simple count varibale with for loop code which I do for it is given below </p><br>
#include &lt;iostream&gt;<br>
using namespace std;<br>
int main()<br>
{ <br>
int a[10],i,n,count=0;<br>
cout<<"\nEnter the number of array elements";<br>
cin>>n;<br>
cout<<"\nEnter the array elements";<br>
for(int i=0;i&ltn;i++) <br>
{<br>
   cin>>a[i];	<br>	     
}<br>
for(int i=0;&lt<n;i++)<br>
{<br>
if(a[i]==0)<br>
{<br>
	count++;<br>
}<br>  		     
}<br>
cout<<"\nNumber of zeroes are"&lt&lt count; <br>
return 0;<br>
}<br>
Assignment 1:3 statement
Problem Statement:<br>
Given a number n.The task is to find the smallest number whose factorial contain at least n trailing zeroes.<br>
So to slove these problem we will understand what is trailing zeros.<br>
Trailing zeros:Trailing zeros are a sequence of 0 in any positive representation of a number,after which no other digits follow.<br>
For example:<br>
Input: n = 5<br>
Output: 1 <br>
Factorial of 5 is 120 which has one trailing 0.<br>
Input: n = 20<br>
Output: 4<br>
Factorial of 20 is 2432902008176640000 which has<br>
4 trailing zeroes.<br>
code:<br>
#include &lt;iostream&gt;<br>
using namespace std;<br>
 
int countTrailingZeroes(int n)<br>
{
    int count = 0;<br>
    for (int i = 1; i <= n; i++) {<br>
        int j = i;<br>
        while (j % 5 == 0) {<br>
            count++;<br>
            j /= 5;<br>
        }<br>
    }<br>
    return count;<br>
}<br>
 
int main()<br>
{
    int n,x ;<br>
    do<br>
    {<br>
    cout<<"\nEnter the value of n";<br>
    cin>>n;<br>
    cout << countTrailingZeroes(n) << endl;<br>
    cout<<"\nTo continue type 1";<br>
    cin>>x;<br>
} while(x==1);<br>
    return 0;<br>
}
<h2>the number of factors of 5=number of trailing zeroes.</h2>









