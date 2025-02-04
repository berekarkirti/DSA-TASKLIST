#include <iostream>

using namespace std;

int main()
{
	int Number1,Number2;
	cout << "Enter Number1 & Number2: ";
	cin  >> Number1 >> Number2;
	
	if(Number2 == 0)
	{
		cout << "Enter a valid number" << endl;
	}

	else 
	{
	    if(Number1 % Number2 == 0)
		{
		   cout << "This Value is divisible" << endl;
		}
		else
		{
		   cout << "This Value is not divisible" << endl;
		}
	}
	
	return 0;
}