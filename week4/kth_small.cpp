#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cout<<"Enter the no. of test cases:-";
	cin>>t;

	while(t--)
	{
		int n,i,k;
		cout<<"Enter the size of array:-";
		cin>>n;
		int arr[n];
		cout<<"Enter the elements of array:-";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<"Enter the value of k: ";
		cin>>k;
		sort(arr,arr+n);
		i=0;
		cout<<arr[k-1]<<endl;
    }
    return 0;
}
