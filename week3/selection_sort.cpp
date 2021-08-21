#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cout<<"Enter the no. of test cases:-";
	cin>>t;

	while(t--)
	{
		int n,i,j,min,p,c=0,s=0;
		cout<<"Enter the size of array:-";
		cin>>n;
		int arr[n];
		cout<<"Enter the elements of array:-";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(i=0;i<n-1;i++)
		{
			min=arr[i];
			for(j=i+1;j<n;j++)
			{
				if(arr[j]<min)
				{
					min=arr[j];
					p=j;
				}
				c++;
			}
			int t=arr[i];
			arr[i]=arr[p];
			arr[p]=t;
			s++;
		}
		cout<<"The sorted array is:-\n";
		for(i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		cout<<"comparisons = "<<c<<endl;
		cout<<"swaps = "<<s<<endl;
		
	}
	return 0;
}
