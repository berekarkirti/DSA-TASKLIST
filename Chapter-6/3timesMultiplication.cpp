#include <iostream>
using namespace std;

int main() 
{
    // Print series: 2, 6, 18, 54, ...
    int n = 2, p;

    for (p = 1; p <= 10; p++) 
    {
        if (p == 1) 
        {
            cout << n; 
        } 
        else 
        {
            cout << "," << n; 
        }
        n = n * 3; 
    }

    return 0;
}
