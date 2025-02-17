#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	
	int sum=0,arr[n];
	
	for(int i=1;i<=n;i++)
	{
		cout << "value of [" << i << "]:";
		cin >> arr[i] ;
	}
	for(int i=1;i<=n;i++)
	{	
	    sum=sum+i;
	}
	cout << sum;
}