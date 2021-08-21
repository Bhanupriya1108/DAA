#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cout<<"Enter the no. of test cases:-";
	cin>>t;

	while(t--)
	{
		int n,i,f=0;
		cout<<"Enter the size of array:-";
		cin>>n;
		int arr[n];
		cout<<"Enter the elements of array:-";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(i=0;i<n;i++)
		{
			if(arr[i]==arr[i+1])
			{
				f=1;
			}
		}
		if(f==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
    }
    return 0;
}
