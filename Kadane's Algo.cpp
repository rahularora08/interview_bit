#include <bits/stdc++.h>
int maxsum(int a[],int);
using namespace std;
int main()
{   int n,j=0;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    int max_sum=maxsum(arr,n);
    cout<<max_sum;
    return 0;
}
int maxsum(int a[],int size)
{
	int maxsofar=0,check=0,k=0,overall_max=0,min=INT_MIN;
	for(int i=0;i<size;i++)
	{   
	    maxsofar+=a[i];
		if(maxsofar<0)
		maxsofar=0;
		if(maxsofar>overall_max)
		overall_max=maxsofar;
		if(a[i]<0)
	     {
	     	k++;
	     	if(k==1)
	     	  min=a[i];
	     	if(a[i]>min)
	     	  min=a[i];
	     	check++;
		 }
	}
	if(check==size)
	return min;
	else
	return overall_max;
}
