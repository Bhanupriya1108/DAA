#include<stdio.h>

int main()
{   
    int t;
    printf("Enter the no. of test cases:-");
    scanf("%d",&t);
    while(t--)
    {
	int n,k,i,f=0;
	printf("Enter the size of array : -");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array :-");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
    }
    printf("Enter the element to search :-");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
    if(arr[i]==k)
    {
    f=1;
    break;
    }
    }
    if(f==1)
    {
    	printf("found at index %d\n",i);
	}
	else
	    printf("not found\n");
    }
    return 0;
}
