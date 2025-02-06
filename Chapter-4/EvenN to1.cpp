#include<iostream>

using namespace std;

int main()
{
	// wap to print only an even number from n to 1 using while/for loop.


    //using for loop:-
	int i,n;
	
	cout << "Enter The value of n :";
	cin  >> n;
	
	for(i=n;i>=1;i--)
	{
		if(i%2==0)
		{
			cout << i << endl;
		}
	}
	
	
	//using while loop:-
	
	int x;
	
	cout << "Enter The Value of x :";
	cin  >> x;
	
	while(x>=1)
	{
		if(x%2==0)
		{
			cout << x << endl;
		}
		x--;
	}
	return 0 ;
}