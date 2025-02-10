#include <iostream>
using namespace std;

int main() 
{
    // Print series: 5.2, 4.8, 4.4, 4, ...
    float n = 5.2;
    int p;

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
        n = n - 0.4; 
    }

    return 0;
}
