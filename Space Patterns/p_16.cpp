#include <iostream>

using namespace std;

int main()
{
    // A B C D E
    //   B C D E
    //     C D E
    //       D E
    //         E

    for (char i = 'A'; i <= 'E'; i++) 
    {
        for (char k = 'A'; k < i; k++) 
        {
            cout << " ";
        }
        for (char j = i; j <= 'E'; j++) 
        {
            cout << j ;
        }
        cout << endl;
    }

    return 0;
}
