#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cout<<"Enter the no. of test cases:-";
	cin>>t;

	while(t--)
	{
		int n,i,j,c=0;
		cout<<"Enter the size of array:-";
		cin>>n;
		int arr[n];
		cout<<"Enter the elements of array:-";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(i=0;i<n;i++)
		{
			int t;
			t=arr[i];
			j=i-1;
			while(t<arr[j] && j>=0)
			{
				arr[j+1]=arr[j];
				j--;
				c++;
			}
			arr[j+1]=t;
		}
		cout<<"The sorted array is:-\n";
		for(i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
			cout<<endl;
		}
		cout<<"comparisons = "<<c<<endl;
		cout<<"shifts = "<<n-1+c<<endl;
    }
    return 0;
}
