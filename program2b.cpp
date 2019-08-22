#include <iostream>

using namespace std;

int main()
{
    int n, k, min_index, temp;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array :";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the value of k";
    cin>>k;
    for(int i=0; i<k; i++)
    {
        min_index=i;

        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_index])
                min_index=j;
       }
        temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }

    cout<<" number is"<<arr[k-1];
}
