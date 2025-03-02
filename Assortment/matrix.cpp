#include <iostream>

using namespace std;

int main()
{

    int rows, columns;
    cout << "Enter the array's rows & columns size: ";
    cin >> rows >> columns;

    int arr[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter the value for position [" << i << "],[" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int transpose[columns][rows];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }


    cout << "The transpose matrix is:" << endl;
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

}
