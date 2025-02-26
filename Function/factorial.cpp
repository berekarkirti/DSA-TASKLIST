#include <iostream>

using namespace std;

// wap to find factorial using udf.
int Factorial(int N) 
{
    int fact = 1;
    for (int i = 1; i <= N; i++) 
	{
        fact = fact * i;
    }
    return fact;
}

int main() 
{
    int N;
    cout << "Enter the value of N : ";
    cin >> N;

    if (N < 0) 
	{
        cout << "Factorial is not for negative value" << endl;
    } 
	else 
	{
        int result = Factorial(N);
        cout << "The factorial is: " << result << endl;
    }


}
