#include <iostream>

using namespace std;

int main() 
{
    // sum of anti-diagonal element of 2d array.
 	
    int m, n;

    cout << "Enter rows and columns (m n): ";
    cin >> m >> n;

    int arr[m][n];
    int sum=0;
    int num=1,start=2;


    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    
    for (int i = 0; i < m; i++)
    {
    	for(int j = 0; j<n; j++)
    	{
    		num++;
		}
		sum = sum + arr[i][start];
		start--;
	} 
	cout <<sum; 
    
}

