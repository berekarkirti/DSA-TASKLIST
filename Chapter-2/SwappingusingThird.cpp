#include <iostream>

using namespace std;

int main()
{
	int x,y,z;
	
	cout << "Enter The Value of x :";
	cin  >> x;
	
	cout << "Enter The Value of y :" ;
	cin  >> y;
	
	z = x;
	x = y;
	y = z;
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	
	
	
}