#include<bits/stdc++.h>

using namespace std;

int main()
{
		int n1,n2,i,j;
		cout<<"Enter the size of 1st array:-";
		cin>>n1;
		int arr[n1];
		cout<<"Enter the elements of array:-";
		for(i=0;i<n1;i++)
		{
			cin>>arr[i];
		}
		cout<<"Enter the size of 2nd array:-";
		cin>>n2;
		int arr2[n2];
		cout<<"Enter the elements of array:-";
		for(i=0;i<n2;i++)
		{
			cin>>arr2[i];
		}
		i=0,j=0;
		while(i<n1 || j<n2)
		{
			if(arr[i]<arr2[j])
			{
				i++;
			}
			else if(arr2[j]<arr[i])
			{
				j++;
			}
			else if(arr[i]==arr2[j])
			{
				cout<<arr[i]<<" ";
				i++;
				j++;
			}
			
		}
	return 0;
}
