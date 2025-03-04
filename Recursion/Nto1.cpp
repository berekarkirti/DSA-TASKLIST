#include <iostream>

using namespace std;

void sub1(int n, int i = 1) 
{
    if (n == 0) 
	{
		return; 
	} 
	
	cout << n << ","; 
    sub1(n - 1);  
}

int main() 
{
    sub1(10);  
}