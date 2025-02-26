#include<iostream>

using namespace std;

int calculate(int N)
{
    return N * N * N;
}

int main()
{
	int N;
	cout << "Enter the value of N:" ;
	cin  >> N ;
	
	int cube = calculate(N);
	cout << "Cube is: " << cube << endl;
}