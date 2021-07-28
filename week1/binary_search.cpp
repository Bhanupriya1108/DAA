#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cout<<"Enter the no. of test cases :-";
	cin>>t;
	while(t--)
	{
	    int n,i,a,s,e,m,f=0;
	    cout<<"Enter the size of array :-";
	    cin>>n;
	    int arr[n];
	    cout<<"Enter the elements of array :-";
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	     for(i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" "<<endl;
	    }
	    cout<<"Enter the element to search :-";
	    cin>>a;
	    s=0;
	    e=n-1;
	    while(s<=e)
	    {
	    	 m=(s+e)/2;
	    	 if(arr[m]==a)
	    	 {
	    	 	f=1;
	    	 	break;
			 }
			 else if(a>arr[m])
			 {
			 	s=m+1;
			 }
			 else if(a<arr[m])
			 {
			 	e=m-1;
			 }
			 
		}
		if(f==1)
		{
			printf("Found\n");
		}
		else
		{
			printf("NOT Found\n");
		}
	    
	}
	return 0;
}

