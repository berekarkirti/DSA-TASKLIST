#include<iostream>

using namespace std;

int main() 
{
	int i =1 ;
	int first = 0,second = 1;
	
	cout << first << " " << second ;
	
	while (i<=10){
    int third = first + second ;
    cout << third << " ";
    first = second ;
    second = third ;
    i++;
}

}