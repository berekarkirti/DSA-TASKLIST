#include <iostream>

using namespace std;

int main()
{
	int Number;
	
	cout << "Enter Your Number Here:-";
	cin  >> Number;
	
	
	if(Number % 7 == 0)
	{
		cout << "This number is divisible by 7." << endl;
	}
	
	else
	{
	    cout << "This number is not divisible by 7." << endl;
	}
	
	return 0;
}