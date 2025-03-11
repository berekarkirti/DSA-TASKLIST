#include<iostream>
#include <string>
using namespace std;

class Student {
	int id;
	string name;
	float percentage;
	char bloodGroup;

public:
void input(int id,string name,float percentage,char bloodGroup){

	this->id = id;
	this->name = name;
	this->percentage = percentage;
	this->bloodGroup = bloodGroup;
}

 void output() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Percentage: " << percentage << endl;
    cout << "Blood Group: " << bloodGroup << endl << endl;
}
};

int main (){
	
	Student Krutika,Diya;
	Krutika.input(1,"Krutika",90,'A');
	Krutika.output();
	
	Diya.input(2,"Diya",85.36,'A');
	Diya.output();


}