#include <iostream>

using namespace std;

int main() {

    // * * * 
    // *     *
    // *      *
    // *      *
    // *      *
    // *     *
    // * * * 

    for (int i = 1; i <= 7; i++) 
	{
        for (int j = 1; j <= 6; j++) 
		{ 
            if (j == 1 ||(i == 1 && j <= 3) ||(i == 7 && j <= 3) ||(j == 4 && i > 1 && i < 7)) 
			{
                cout << "* ";
            } 
			else 
			{
                cout << "  "; 
            }
        }
        cout << endl;
    }

}
