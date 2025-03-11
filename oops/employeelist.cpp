#include<iostream>
#include <string>
using namespace std;

class Employee 
{
	int id;
	string name;
	int age;
	float salary;

public:
void input(int id,string name,int age,float salary){

	this->id = id;
	this->name = name;
	this->age = age;
	this->salary = salary;
}

 void output() 
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl << endl;
}
};

int main ()
{
	
	Employee Ronit,Daksh,saksham;
	Ronit.input(1,"Ronit",13,10000);
	Ronit.output();
	
	Daksh.input(2,"Daksh",11,20000);
	Daksh.output();
	
}