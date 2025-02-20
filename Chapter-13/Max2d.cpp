#include <iostream>

using namespace std;

int main() 
{
    // wap to find the maximum element from a 2D array.
 	
    int m, n;

    cout << "Enter rows and columns (m n): ";
    cin >> m >> n;

    int arr[m][n];

    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];

    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            if (arr[i][j] > max) 
			{
                max = arr[i][j];
            }
        }
    }

    cout << "The maximum value from the array is: " << max << endl;

}
