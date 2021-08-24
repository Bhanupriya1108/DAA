#include<bits/stdc++.h>

using namespace std;

int main()
{
		int n,i,k,f=0;
		cout<<"Enter the size of array:-";
		cin>>n;
		int arr[n];
		cout<<"Enter the elements of array:-";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<"Enter the key element: ";
		cin>>k;
		sort(arr,arr+n);
		int l=0;
		int r=n-1;
		while(l<r)
		{
			if((arr[l]+arr[r])==k)
			{
				f=1;
				cout<<arr[l]<<" "<<arr[r]<<", ";
				r--;
			}
			else if((arr[l]+arr[r])<k)
			{
				l++;
			}
			else if((arr[l]+arr[r])>k)
			{
				r--;
			}
		}
		if(f==0)
		{
			cout<<"NO such pair exist\n";
		}
	return 0;
}
