#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	long long int arr[n];
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			sum=sum+abs(arr[i]-arr[i+1]);
			arr[i+1]=arr[i];
		}
		
	}
	cout<<sum;
	return 0;
}