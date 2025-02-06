#include <iostream>
using namespace std;

int main() 
{
	// Print series: 53, 53, 40, 40, 27, 27, ...

    int n = 53 , p ; 
   
    cout << n << "," << n;
    
    for(p=1;p<=10;p++)
    {
    	if(p%2 != 0)
		{
    		n = n -13;
    		cout << "," << n << "," << n;
		}
//		else
//		{
//			n = n +2;
//			cout << "," << n;
//		}
	
	}

    return 0;
}
