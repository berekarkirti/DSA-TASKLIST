#include<iostream>

using namespace std;

int main()
{
    // wap to find all the negative elements from a given 1D array.
  
    int size;
    cout << "Enter the array's size:";
    cin  >> size;

    int a[size];
    cout << "Enter the array's elements:" << endl;
    for(int i=0; i<size; i++)
    {
	  cin >> a[i];
	}
	
	cout << "Negative elements:" << endl;
	for(int i=0; i<size; i++)
	{
		if(a[i] < 0)
		{
			cout << a[i] << " , ";
		}
	}
}