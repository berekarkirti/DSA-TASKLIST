#include <iostream>

using namespace std;

int main() 
{
    //       * * * 
    //      *       
    //      *       
    //       * * *
    //            *
    //            *
    //       * * * 

    for (int i = 1; i <= 7; i++) 
    {
        for (int j = 1; j <= 5; j++) 
        {
            if ((i == 1 && j > 1 && j < 5) || (i == 2 && j == 1) || (i == 3 && j == 1) || (i == 4 && j > 1 && j < 5) || (i == 5 && j == 5) ||         
                (i == 6 && j == 5) ||        
                (i == 7 && j > 1 && j < 5))  
            {
                cout << "*";
            }
            else 
            {
                cout << " ";
            }
        }
        cout << endl; // Move to the next row
    }
}