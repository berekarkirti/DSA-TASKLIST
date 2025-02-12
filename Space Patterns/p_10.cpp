#include<iostream>

using namespace std;
//wronge output
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
        for (int j = i; j <= 1; j--) 
        {
            cout << i;
        }
        cout << endl;
    }

  
}