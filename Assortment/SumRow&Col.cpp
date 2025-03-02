#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter the array's row & columns size: ";
    cin >> columns >> rows;

    int arr[rows][columns];
    cout << "Enter the array's elements:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    int rowNumber;
    cout << "Enter row number: ";
    cin >> rowNumber;

    if (rowNumber >= 0 && rowNumber < rows)
    {
        int rowSum = 0;
        cout << "Elements of row " << rowNumber << ": ";
        for (int j = 0; j < columns; j++)
        {
            cout << arr[rowNumber][j] << " ";
            rowSum += arr[rowNumber][j];
        }
        cout << endl << "The sum of row " << rowNumber << ": " << rowSum << endl;
    }
    else
    {
        cout << "Invalid row number!" << endl;
    }

    int columnNumber;
    cout << "Enter column number: ";
    cin >> columnNumber;

    if (columnNumber >= 0 && columnNumber < columns)
    {
        int columnSum = 0;
        cout << "Elements of column " << columnNumber << ": ";
        for (int i = 0; i < rows; i++)
        {
            cout << arr[i][columnNumber] << " ";
            columnSum += arr[i][columnNumber];
        }
        cout << endl << "The sum of column " << columnNumber << ": " << columnSum << endl;
    }
    else
    {
        cout << "Invalid column number!" << endl;
    }

    return 0;
}
