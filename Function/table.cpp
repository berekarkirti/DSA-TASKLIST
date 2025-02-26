#include<iostream>

using namespace std;

int calculate(int N)
{
    for(int i=1; i<=10; i++)
    {
    	cout << N << " * " << i << " = " << N * i << endl;
	}
}

int main()
{
	int N;
	cout << "Enter the value of N:" ;
	cin  >> N ;
	
	calculate(N);
}