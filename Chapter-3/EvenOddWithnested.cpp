#include <iostream>

using namespace std;

int main()
{
	int Number;
	cout << "Enter Number: ";
	cin  >> Number;
	
	if(Number >= 0)
	{
		if(Number % 2 == 0)
		{
		   cout << "This Number is Even" << endl;
		}
		else
		{
		   cout << "This Number is Odd" << endl;
		}
	}

	else 
	{
	    cout << "Enter A Number" << endl;
	}
	
	return 0;
}