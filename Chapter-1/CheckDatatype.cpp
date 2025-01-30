#include <iostream>

using namespace std;

int main()
{
	int Number;
	
	cout << "Enter Your Number Here:-";
	cin  >> Number;
	
	
	if(Number < 0)
	{
		cout << "This number is negative." << endl;
	}
	
	else if(Number > 0)
	{
		cout << "This number is positive." << endl;
	}
	
	else
	{
	    cout << "This number is neutral." << endl;
	}
	
	return 0;
}