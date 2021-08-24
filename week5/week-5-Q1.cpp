#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cout<<"Enter the no. of test cases:-";
	cin>>t;

	while(t--)
	{
		int n,i,a1,max=0;
		cout<<"Enter the size of array:-";
		cin>>n;
		char arr[n];
		cout<<"Enter the elements of array:-";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int c[26]={0};
		for(i=0;i<n;i++)
		{
		
			c[arr[i]-97]=c[arr[i]-97]+1;
		}
		for(i=0;i<26;i++)
		{
			
			if(c[i]>max)
			{
				max=c[i];
				a1=i;
			}
		}
		if(max>1)
		printf("%c-%d\n",(a1+97),max);
		else
		printf("no duplicates found\n");
	}
	return 0;
}
