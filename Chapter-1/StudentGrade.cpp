#include <iostream>

using namespace std;

int main()
{
	float Percentage;
	
	cout << "Enter Your Percentage Here:-";
	cin  >> Percentage;
	
	
	if(Percentage < 40 && Percentage >= 0)
	{
		cout << "Your Grade : F" << endl;
	}
	
	else if(Percentage >= 40 && Percentage < 50)
	{
		cout << "Your Grade : D" << endl;
	}
	
	else if(Percentage >= 50 && Percentage < 60)
	{
		cout << "Your Grade : C" << endl;
	}
	
	else if(Percentage >= 50 && Percentage < 60)
	{
		cout << "Your Grade : C" << endl;
	}
	
	else if(Percentage >= 60 && Percentage < 70)
	{
		cout << "Your Grade : B" << endl;
	}
	
	else if(Percentage >= 70 && Percentage < 80)
	{
		cout << "Your Grade : B+" << endl;
	}
	
	else if(Percentage >= 80 && Percentage < 90)
	{
		cout << "Your Grade : A" << endl;
	}
	
	else if(Percentage >= 90 && Percentage < 100)
	{
		cout << "Your Grade : A+" << endl;
	}
	
	else
	{
		cout << "Enter Valid Percentage" << endl;
	}
	
	return 0;
}