#include<iostream>

using namespace std;

int main()
{
	//	-
	//	| -
	//	- | -
	//	| - | -
	//	- | - | -

    for(int i=1;i<=5;i++)
    {
    	for(int j=i;j>=1;j--)
    	{
    		if(j%2==0)
    		{
    			cout << "| ";
			}
			else
			{
				cout << "- ";
			}
		}
		cout << endl;
	}
	return 0;
}