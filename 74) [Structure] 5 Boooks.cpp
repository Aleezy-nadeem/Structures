/*write a program that input data of five books with title, aurther name, number of pages, price, edition*/
#include<iostream>
#include<conio.h>
using namespace std;
struct book {
	char title[10];
	char name[20];
	int page;
	double price;
	char edition[5];
};
int main() 
{
	book B[5];
	int j;
	for(int i=0; i<5; i++) { j=i+1;
		cout<<"Enter Record of book "<<j<<endl;
		cout<<"Enter title of book: ";
		cin>>B[i].title;
		cout<<"Enter Your Name: ";
		cin>>B[i].name;
		cout<<"Enter Price of book: ";
		cin>>B[i].price;
		cout<<"Enter Number of pages of book: ";
		cin>>B[i].page;
		cout<<"Enter edition of book: ";
		cin>>B[i].edition;
		cout<<endl;
	}
	system("cls");
	for(int i=0; i<5; i++) {	j=i+1;
		cout<<"Record of book "<<j<<endl;
		cout<<"title of book = "<<B[i].title<<endl;
		cout<<"Your Name = "<<B[i].name<<endl;
		cout<<"Price of book = "<<B[i].price<<endl;
		cout<<"Number of pages of book = "<<B[i].page<<endl;
		cout<<"Enter edition of book: "<<B[i].edition<<endl<<endl;
	}
}