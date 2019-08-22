
#include<iostream>

using namespace std;

int main()
{
	int n,k;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];

 	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];

    cout<<"Enter value of k :";
	cin>>k;

	for(int i=0;i<k;i++)
	{
		int max_index = i;
		for(int j=i+1;j<n;j++)
			if(arr[j]>arr[max_index])
				max_index=j;
		int temp = arr[i];
		arr[i]=arr[max_index];
		arr[max_index]=temp;
	}

    cout<<endl;

    for(int i=0;i<k;i++)
		cout<<arr[i]<<" ";
}
