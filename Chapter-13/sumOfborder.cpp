#include<iostream>

using namespace std;

int main()
{
	
	int r,c;
	cout << "Enter Size: ";
	cin >> r >> c;
	
	int arr[r][c];
	
	int sum=0,num=1,k=2;
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout << "Enter arr[" << i << "][" << j <<  "]: ";
			cin >> arr[i][j];
		}
		cout << endl;
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout << num << " ";
			num++;	
			if(i==0 || j==0 || i==r-1 || j==c-1)
			{
				sum += arr[i][j];
			}	
		}
		cout  << endl;
	}
	
	cout << sum;

}