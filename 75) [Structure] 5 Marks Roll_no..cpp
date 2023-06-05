/*writea program that declare a structure to store the roll number and marks of five students it declares a structure variabl, input the values and display the roll number, marks and average marks*/
#include<iostream>
using namespace std;
struct test{
	int roll_no;
	int M[5];
};
int main()
{
	test T;
	int sum=0;
	float avg=0.0;
	cout<<"Enter Roll #:";
	cin>>T.roll_no;
	for(int i=0;i<5;i++) {
		cout<<"\nEnter Marks:";
		cin>>T.M[i];
		sum+=T.M[i];
	}
	avg=sum/5.0;
	cout<<"\nRoll # = "<<T.roll_no<<endl;
	for(int i=0; i<5;i++) {
		cout<<"Marks = "<<T.M[i]<<endl;
	}
	cout<<"\nAverage of marks = "<<avg;
	return 0;
}