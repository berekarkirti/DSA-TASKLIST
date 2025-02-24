#include <iostream>

using namespace std;

int main() 
{
	// wap to get and print rxc 2D array.
	
    int m, n;

    cout << "Enter rows and columns (m n): ";
    cin >> m >> n;

    int arr[m][n]; 

    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            cout << "Enter arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "Array is:" << endl;
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
