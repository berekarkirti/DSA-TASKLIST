#include <iostream>
using namespace std;

int main()
{
    // Desired Pattern:
    // 1 0 1 0 1
    //   0 1 0 1
    //     1 0 1
    //       0 1
    //         1

    for (int i = 1; i <= 5; i++) 
    {
        for (int k = 1; k < i; k++) 
        {
            cout << " ";
        }
        for (int j = i; j <= 5; j++) 
        {
           cout << j%2;  
        }
        cout << endl;
    }
  

    return 0;
}
