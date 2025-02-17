#include <iostream>
using namespace std;

int main() 
{
    
    for (int i = 1; i <= 7; i++) 
    {
        for (int j = 1; j <= 13; j++) 
        {
            if ((j == i) || (j == 14 - i))  
            {
                cout << "*";
            }
            else 
            {
                cout << " ";
            }
        }
        cout << endl; 
    }

    return 0;
}
