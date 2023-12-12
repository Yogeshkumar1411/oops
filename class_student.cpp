#include<iostream>
using namespace std;
class Student
{
public:
	string name;
	int roll_no;
	unsigned int mobNum;
	string address;
};
int main()
{
	Student student1;
	student1.name = "John";
	student1.roll_no = 20;
	student1.mobNum = 543210;
	student1.address = "45, 1st street, Hevuy, GV";
	cout<<student1.name<<"\n"<< student1.roll_no<<"\n"<<student1.mobNum<<"\n"<<student1.address<<endl;
	
	Student student2;
	student2.name = "Sam";
	student2.roll_no = 21;
	student2.mobNum = 543211;
	student2.address = "46, 1st street, Hevuy, GV";
	cout<<student2.name<<"\n"<< student2.roll_no<<"\n"<<student2.mobNum<<"\n"<<student2.address<<endl;
}
