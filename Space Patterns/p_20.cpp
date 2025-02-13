#include<iostream>

using namespace std;
//wronge output
int main()
{
	//1 0 1 0 1
	//  1 0 1 0
	//    1 0 1
	//      1 0
	//        1

    for (int i = 1; i <= 5; i++) 
    {
        for (int k = 1; k < i; k++) 
        {
            cout << " ";
        }
        for (int j = i; j <= 5; j++) 
        {
        	int n = (i + j);
            if(n%2==0)
            {
            	cout << "1";
			}
			else
			{
				cout << "0";
			}
        }
        cout << endl;
    }
  
  
 
  
}