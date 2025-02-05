#include<iostream>

using namespace std;

int main()
{
	// wap to print 1 to n using while/for loop.
	
	
	//using for loop:-
	
	int i,n;
	
	cout << "Enter The value of n :";
	cin  >> n;
	
	for(i=1;i<=n;i++)
	{
		cout << i << endl;
	}
	
	//using while loop:-
	
	int x=1,m;
	
	cout << "Enter The Value of m :";
	cin  >> m;
	
	while(x<=m)
	{
		cout << x << endl;
		x++;
	}
}