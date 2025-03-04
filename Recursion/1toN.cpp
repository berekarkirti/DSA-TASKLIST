#include <iostream>

using namespace std;

void addN(int n, int i = 1) 
{
    if (i > n) 
	{
		return; 
	} 
	
	cout << i << ","; 
    addN(n, i + 1);  
}

int main() 
{
    addN(10);  
}