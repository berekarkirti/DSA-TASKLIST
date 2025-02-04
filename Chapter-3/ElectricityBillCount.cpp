#include <iostream>

using namespace std;

int main()
{
	int Unit ,Amount;
	cout << "Enter Your Unit : ";
	cin >> Unit;
	
	if(Unit>0 && Unit<=100)
	{
		Amount = (Unit*0.5);
		cout << "Your Total Bill is : " << Amount;
	}
	else if(Unit>101 && Unit<=200)
	{
		Amount = (Unit*1);
	    cout << "Your Total Bill is : " << Amount;
	}
	else if(Unit>201 && Unit<=300)
	{
		Amount = (Unit*1.5);
	    cout << "Your Total Bill is : " << Amount;
	}
	else if(Unit>301)
	{
		Amount = (Unit*2);
		cout << "Your Total Bill is : " << Amount;
	}
	else 
	{
	    Amount = 0;
	}
	
	return 0;
}