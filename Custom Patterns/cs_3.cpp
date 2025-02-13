#include<iostream>

using namespace std;

int main()
{
	for(int i=5; i>=1; i--)
	{
		for(int j=1; j<=i; j++)
		{
			cout << j;
		}
		for(int l=i; l<5; l++)
		{
			cout << "  ";
		}
		for(int k=i; k>=1; k--)
		{
			cout << k;
		}
		cout << endl;
	}
}