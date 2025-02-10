#include <iostream>
using namespace std;

int main() 
{
	// Print series: 80, 10, 70, 15, 60, ... 

    int n = 80, m = 10 , p ; 
    
    for(p=1;p<=10;p++)
    {
    	if(p%2==0)
    	{
    	  cout << "," << m;
    	  m = m + 5;
		}
		else
		{
		  if(p == 1)
		  {
		  	cout << n;
		  }
		  else
		  {
		  	cout << "," << n;
		  }
		  n = n - 10;
		}
	}

    return 0;
}
