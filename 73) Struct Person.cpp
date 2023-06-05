/*write a program to store the information of a person in structure and display these information on screen*/
#include<iostream>
using namespace std;
struct person{
	int age;
	char name[20];
	double salary;
};
int main()
{
	person p1;
	cout<<"\nEnter Name: ";
	cin.get(p1.name, 20);
	cout<<"\nEnter Age: ";
	cin>>p1.age;
	cout<<"\nEnter Salary: ";
	cin>>p1.salary;
	cout<<"\nName = "<<p1.name<<"\nAge = "<<p1.age<<"\nSalary = "<<p1.salary;
	return 0;
}