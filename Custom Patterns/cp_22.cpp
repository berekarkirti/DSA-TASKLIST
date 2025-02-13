#include<iostream>

using namespace std;

int main()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=8;j++)
		{
			if(((i>=2 && i<=6) && (j==1 || j==5)) || ((i==1 || i==7 ) && (j>=2 && j<=4)) || (i==5 && j==3) ||(i==6 && j==4)|| (i==7 && j==5) || (i==8 && j==6))
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
}