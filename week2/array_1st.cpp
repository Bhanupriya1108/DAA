#include<bits/stdc++.h>
 
 using namespace std;
 
 int main()
 {
 	int t;
 	cout<<"Enter the no. of test cases:-";
 	cin>>t;
 	while(t--)
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
		cout<<"Enter the element to search:-";
		cin>>k;
		int s=0,e=n-1,m;
		while(s<=e)
		{
			m=(s+e)/2;
			if(arr[m]==k)
			{
				f=1;
				break;
			}
			else if(k>arr[m])
			{
				s=m+1;
			}
			else if(k<arr[m])
			{
				e=m-1;
			}
		}
		int l=0,r=0;
		if(f==1)
		{
			i=0;
			while(arr[i]==arr[i+1])
			{
				l++;
				i++;
			}
			while(arr[i]==arr[i-1])
			{
				r++;
				i--;
			}
			
			printf("Key is Found\n");
			cout<<l+r<<" no. of times "<<endl;
		}
		else
		{
			printf("Key is not present\n");
		}
	}
	return 0;
 }
