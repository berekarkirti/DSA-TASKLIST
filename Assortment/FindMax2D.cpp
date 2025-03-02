#include<iostream>

using namespace std;

int main()
{
    // wap to find the largest element from a given 2D array.
  
    int rows,columns;
    cout << "Enter the array's rows & columns size:";
    cin  >> rows >> columns;

    int arr[rows][columns];
   
    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cin >> arr[i][j]; 
        }
    }
  
    int largest = arr[0][0]; 
  
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            if(arr[i][j] > largest) 
            {
                largest = arr[i][j];
            }
        }
    }
    cout << "The largest element is: " << largest ;
}