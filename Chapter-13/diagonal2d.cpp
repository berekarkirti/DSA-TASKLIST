#include <iostream>

using namespace std;

int main() 
{
    // sum of diagonal element of 2d array.
 	
    int m, n;

    cout << "Enter rows and columns (m n): ";
    cin >> m >> n;

    int arr[m][n];
    int sum=0;
    int num=1;


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
   		    if(i==j)
    		{
    			sum = sum + arr[i][j];
			}
		}
	} 
	cout <<sum; 
    
}

