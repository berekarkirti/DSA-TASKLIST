#include<iostream>

using namespace std;

int sumofN (int n)
{
	 if (n==0) 
	 {
	 	return 0;  
	 }
	  return n + sumofN(n-1);	
}
int main()
{
	int i = sumofN(10);
	cout << "Sum is : " << i;
}