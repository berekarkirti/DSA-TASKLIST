#include<iostream>

using namespace std;

int main()
{
	//5 4 3 2 1 
	//  4 3 2 1
	//    3 2 1
	//      2 1
	//        1

    
  for (int i = 1; i <= 5; i++) 
    {
        for (int k = 1; k < i; k++) 
        {
            cout << " ";
        }
        // Print numbers from 5 down to i
        for (int j = 5; j >= i; j--) 
        {
            cout << "*";
        }
        cout << endl;
    }

  
}