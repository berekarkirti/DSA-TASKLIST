#include<iostream>

using namespace std;

int main()
{
	// wap to print leap years between 2000 to 3000.

    int i ;
    
    for(i = 2000 ; i<=3000; i++)
	{
       if(i % 4 == 0 )
       {
       	 cout << i << endl;
	   }
	}

	return 0 ;
}