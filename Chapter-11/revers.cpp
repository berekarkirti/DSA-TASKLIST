#include<iostream>
using namespace std;
int main()
{
	
	// Write a program in C to read n number of values in an array and display them in reverse order.
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cout << "value of [" << i << "]:";
		cin >> arr[i] ;
	}
	for(int i=n-1; i>=0; i--)
	{
		cout << arr[i] << " ";
	}
	cout <<endl;
}

//#include <iostream>
//using namespace std;
//
//int main() {
//    // Write a program in C++ to copy the elements of one array into another array.
//    int n;
//
//    // Input size of the array
//    cout << "Enter size of array: ";
//    cin >> n;
//
//    int arr[n], copyArr[n]; // Declare two arrays: one for the original and one for the copy
//
//    // Input elements into the original array
//    for (int i = 0; i < n; i++) {
//        cout << "Value of [" << i << "]: ";
//        cin >> arr[i];
//    }
//
//    // Copy elements from `arr` to `copyArr`
//    for (int i = 0; i < n; i++) {
//        copyArr[i] = arr[i];
//    }
//
//    // Display the copied array
//    cout << "Copied array elements: ";
//    for (int i = 0; i < n; i++) {
//        cout << copyArr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
