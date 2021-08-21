#include <bits/stdc++.h>

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
		for(i=0; i<n;i++)
		{
			cin>>arr[i];
		}
		int k;
		cout<<"Enter the element to search:-";
		cin>>k;
		sort(arr,arr+n);
		cout<<"The elements of array are:-";
		for(i=0; i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		int s=0,e=sqrt(n);
		while(arr[e]<=k)
		{
		    s=e;
			e=e+sqrt(n);
			if(e>=n)
			{
				e=n-1;
				break;
			}	
		}
		for(i=s;i<=e;i++)
		{
		
			if(arr[i]==k)
			{
				printf("FOUND!\n");
				f=1;
				break;
			}
	    }
	    if(f==0)
			{
				printf("NOT FOUND!\n");
			}
	}
	return 0;
}
