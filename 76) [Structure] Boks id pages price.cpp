/*write a program that declare a structure to store id, pages, and price of a book. it define an array of structure to record data of five boks , it input a record and finally display the data*/
#include<iostream>
using namespace std;
struct book {
	int id;
	int pg;
	int price;
};
int main()
{
	book B[5];
	for(int i=0; i<5;i++) {
		cout<<"Enter book id: ";
		cin>>B[i].id;
		cout<<"Enter Pages: ";
		cin>>B[i].pg;
		cout<<"Enter Price: ";
		cin>>B[i].price;
		cout<<endl;
	}
	cout<<endl<<endl<<endl;
	for(int i=0; i<5;i++) {
		cout<<"book id ="<<B[i].id<<endl;
		cout<<"Pages = "<<B[i].pg<<endl;
		cout<<"Price: "<<B[i].price<<endl<<endl;	
	}
}