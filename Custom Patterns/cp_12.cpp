#include <iostream>
using namespace std;

int main() {

    //   * * *
    // *       *
    // *      
    // *   * * *
    // *       *
    // *       *
    //   * *  *

    for (int i = 1; i <= 7; i++) 
	{ 
        for (int j = 1; j <= 7; j++) 
		{ 
            if ((i == 1 && j > 1 && j < 7) || (i == 7 && j > 1 && j < 7) ||(j == 1 && i > 1 && i < 7) ||(i == 4 && j > 3 && j < 7) ||(j == 6 && i >= 4 && i < 7)) 
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
