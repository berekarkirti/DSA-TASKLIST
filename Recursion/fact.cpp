#include<iostream>

using namespace std;

int fact(int n)
{
	 if (n==0) 
	 {
	 	return 1;  
	 }
	 return n *  fact(n-1);	
}
int main()
{
	int result = fact(10);
	cout << "Sum is : " << result;
}