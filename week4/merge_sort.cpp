#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int l,int m,int r)
{
	int n1=m-l+1,n2=r-m;
	int i,j;
	int L[n1],R[n2];
	for(i=0;i<n1;i++)
	{
		L[i]=arr[l+i];
	}
	for(j=0;j<n2;j++)
	{
		R[j]=arr[m+1+j];
	}
	i=0;
	j=0;
	int k=l;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}

void merge_sort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		merge_sort(arr, l, m);
		merge_sort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}

int main()
{
	int t;
	cout<<"Enter the no. of test cases: -";
	cin>>t;
	while(t--)
	{
	int n,i,l,r;
	cout<<"Enter the size of array:- ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array:- ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];	
	}
	l=0;
	r=n-1;
	merge_sort(arr,l,r);
	cout<<"Sorted array:-"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";	
	}
	cout<<endl;
    }
	return 0;
}
