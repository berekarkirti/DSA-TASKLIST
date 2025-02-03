#include <iostream>

using namespace std;

int main()
{
	int x,y;
	
	cout << "Enter The Value of x :";
	cin  >> x;
	
	cout << "Enter The Value of y :" ;
	cin  >> y;
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	
	cout << "x = " << x << endl;
	cout << "y = " << y;
	
	
	
}