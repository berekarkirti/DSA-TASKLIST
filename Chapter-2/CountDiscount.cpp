#include <iostream>

using namespace std;

int main()
{
	int amount ,discount;
	cout << "Enter Your Amount : ";
	cin >> amount;
	
	if(amount>0 && amount<=1000)
	{
		discount = (amount*5)/100;
		amount = amount - discount;
		cout << "Your discount is 5% and the amount is : " << amount;
	}
	else if(amount>1000 && amount<=5000)
	{
		discount = (amount*10)/100;
		amount = amount - discount;
		cout << "Your discount is 10% and the amount is : " << amount;
	}
	else if(amount>5000 && amount<=10000)
	{
		discount = (amount*20)/100;
		amount = amount - discount;
		cout << "Your discount is 20% and the amount is : " << amount;
	}
	else if(amount>10000)
	{
		discount = (amount*25)/100;
		amount = amount - discount;
		cout << "Your discount is 25% and the amount is : " << amount;
	}
	else 
	{
		discount = 0;
	}
}