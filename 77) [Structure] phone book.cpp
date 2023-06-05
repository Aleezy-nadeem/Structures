/*Write a program that uses two structures data and phonebook. The data
structure store day, month and year. Phonebook structure store name, city,
telephone and a data type. The program declare a variable of type phonebook,
input values and then display them?*/
#include<iostream>
using namespace std;
struct date{
	int d;
	int m;
	int y;
};
struct Phonebook{
	char phone_no[11];
	char name[20];
	char city[10];
	date D;
};
int main()
{
	Phonebook P;
	cout<<"Enter Name: ";
	cin>>P.name;
	cout<<"Enter City: ";
	cin>>P.city;
	cout<<"Enter Phone Number: ";
	cin>>P.phone_no;
	cout<<"Enter Date in format:  day month year: ";
	cin>>P.D.d>>P.D.m>>P.D.y;
	cout<<endl<<endl;
	cout<<"Name: "<<P.name<<endl;
	cout<<"City: "<<P.city<<endl;
	cout<<"Phone Number: "<<P.phone_no<<endl;
	cout<<"Date:  "<<P.D.d<<":"<<P.D.m<<":"<<P.D.y;
	
}