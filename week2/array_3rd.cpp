#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cout<<"Enter the no. of test cases:-";
	cin>>t;
	while(t--)
	{
	int n,i,j,k,c=0;
	cout<<"Enter the size of array:-";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array:-";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key element:-";
	cin>>k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(abs(arr[i]-arr[j])== k)
		{
			c++;
		}
		else
		continue;
	    }
	}
	cout<<c<<endl;
    }
	return 0;
}
