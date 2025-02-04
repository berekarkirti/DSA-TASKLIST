#include <iostream>

using namespace std;

int main()
{
    int Age;
    
    cout << "Enter Your Age Here: ";
    cin >> Age;
    
    if (Age < 0 || Age > 100) {
        cout << "Please enter a valid age (between 0 and 100)." << endl;
    }
    else if (Age >= 18) {
        cout << "You are eligible to vote." << endl;
    }
    else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}
