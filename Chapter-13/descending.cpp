#include <iostream>

using namespace std;

int main() 
{
    // wap to set decending all element of 2d array.
 	
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

    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            for (int x = 0; x < m; x++) 
			{
                for (int y = 0; y < n; y++) 
				{
                    if (arr[i][j] > arr[x][y]) 
					{
                        int temp = arr[i][j];
                        arr[i][j] = arr[x][y];
                        arr[x][y] = temp;
                    }
                }
            }
        }
    }
    
    cout << "Descending :" << " " ;
    for (int i = 0; i < m; i++)
	{
        for (int j = 0; j < n; j++) 
		{
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

   

}
