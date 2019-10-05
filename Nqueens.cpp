#include <bits/stdc++.h>
using namespace std;

int x[100];

bool place(int k, int i)
{
	for(int j = 1; j <= k-1; j++)
		if((x[j] == i) || (abs(x[j]-i) == abs(j-k)))
			return false;
	return true;
}

void NQueens(int k, int n)
{
	for(int i = 1; i <= n; i++)
	{
		if(place(k, i))
		{
			x[k] = i;

			if(k == n)
			{
				cout<<"\nSolution: ";
				for(int j = 1; j <= n; j++)
					cout<<x[j];
			}
			else
				NQueens(k+1, n);			
		}
	}
}

int main()
{
	int n;

	cout<<"\nEnter the number of queens: ";
	cin>>n;

	NQueens(1, n);
	
	cout<<endl;

	return 0;	
}