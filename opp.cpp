#include<iostream>
using namespace std;

class AbstractEmployee{
	public:
		virtual void AskForPromotion() = 0;
};

class Employee:public AbstractEmployee{

	private:
//		string Name;
		string Company;
		int Age;
	protected:
		string Name;

	public:
		Employee(string name,string company,int age){
			Name = name;
			Company = company;
			Age = age;
		}
		void setName(string name){
			Name = name;
		}
		void setCompany(string company){
			Company = company;
		}
		void setAge(int age){
			Age = age;
		}


		string getName(){
			return Name;
		}
		string getCompany(){
			return Company;
		}
		int getAge(){
			return Age;
		}

		void introduceYourself()
		{
			cout<<"I am "<<Name<<" from "<<Company<<" age of "<<Age<<endl;
		}

		void printName(){
			cout<<getName()<<endl;
		}

		void AskForPromotion()
		{
			if(Age>35)
				cout<<getName()<<" got promoted"<<endl;
			else
				cout<<getName()<<", No chance for promotion..."<<endl;
		}
	virtual void work()
		{
			cout<<Name<<" is doing collecting data"<<endl;
		}
};

class Developer:public Employee{
	public:
		string FavProgrammingLanguage;
		void printAbout()
		{
			cout<<Name<<"'s fav language is "<<FavProgrammingLanguage<<endl;
		}
		Developer(string name,string company,int age,string favProgrammingLanguage)
			:Employee(name,company,age)
		{
			FavProgrammingLanguage = favProgrammingLanguage;
		}
		void work()
		{
			cout<<Name<<" doing developing.."<<endl;
		}
};

int main()
{
	Employee E = Employee("Yogesh","Bitsilica",27);
	E.introduceYourself();
	E.printName();

	AbstractEmployee *E2 = new Employee("Jack","Bitsilica",30);
	E2->AskForPromotion();



	Developer d = Developer("John","Bitsilica",35,"C++");
	d.printAbout();
	d.introduceYourself();
	d.work();

	Employee *E3 = &d;
	E3->work();

}
