include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

void search(int arr[],int n,int num)
{
	int start=0,end=n-1;

	while(start<=end)
	{
		int mid=(start+end)/2;
		if (num==arr[mid])
		{
			cout<<"Element found at : "<<mid<<endl;
			return;
		}
		else if(num>arr[mid])
			start=mid+1;
		else if(num<arr[mid])
			end=mid-1;
	}
	cout<<"Element not found!\n";
	return;
}

int main()
{
	//cout<<rand();
	int n;
	cout<<"Enter size of array : ";
	cin>>n;

	int arr[n];
	//cout<<"Enter sorted array : \n";

	for(int i=0;i<n;i++)
		arr[i]=rand();
	sort(arr,arr+n);

	cout<<"Enter element to be searched : ";
	int num;
	cin>>num;

	search(arr,n,num);
}
