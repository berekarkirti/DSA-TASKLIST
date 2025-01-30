//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int Age;
//	
//	cout << "Enter Your Age Here:-";
//	cin  >> Age;
//	
//	
//	if(cin.fail())
//	{
//		cout << "Enter a number for your age." << endl;
//		cin.clear();
//		cin.ignore(10000,'\n');
//	}
//	
//	if(Age < 0 || Age > 100)
//	{
//		cout << "Please Enter Valid Age." << endl;
//	}
//	
//	else if(Age >= 18)
//	{
//		cout << "You are eligible to vote." << endl;
//	}
//	
//	else if(Age <= 18)
//	{
//		cout << "You are not eligible to vote." << endl;
//	}
//	
//	else
//	{
//		cout << "Invalid Input." << endl;
//	}
//	
//	return 0;
//}

#include <iostream>

using namespace std;

int main()
{
    int Age;
    
    cout << "Enter Your Age Here: ";
    cin >> Age;
    
    // Check if input is valid
    if (cin.fail()) {
        cout << "Enter a valid number for your age." << endl;
        // Clear the error flag
        cin.clear();
        // Ignore invalid input (everything in the buffer until newline)
        cin.ignore(10000, '\n');
    }
    else if (Age < 0 || Age > 100) {
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
