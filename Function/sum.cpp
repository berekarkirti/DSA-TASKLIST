#include<iostream>

using namespace std;

int calculate(int N)
{
    return N * N;
}

int main()
{
	int N;
	cout << "Enter the value of N:" ;
	cin  >> N ;
	
	int square = calculate(N);
	cout << "Square is: " << square << endl;
}