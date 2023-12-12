#include<iostream>
using namespace std;

class Abstract{
	public:
	virtual void result() = 0;
};	


class student:public Abstract{
	protected:
		string Name;
	private:
		string schoolName;
		int Total;
	public:
		void setName(string name)
		{
			Name = name;
		}
		void setschoolName(string schoolname)
		{
			schoolName = schoolname;
		}
		void settotal(int total)
		{
			Total = total;
		}


		string getname()
		{
			return Name;
		}

		string getschoolName()
		{
			return schoolName;
		}

		int gettotal()
		{
			return Total;
		}
		void introduceYourself()
		{
			cout<<"I am "<<getname()<<" from "<<getschoolName()<<endl;
		}

		void result()
		{
			if(Total>=70)
				cout<<Name<<": Pass"<<endl;
			else
				cout<<Name<<": Fail"<<endl;
		}
		student(string name,string schoolname,int total)
		{
			Name = name;
			schoolName = schoolname;
			Total = total;

		}
		virtual void work()
		{
			cout<<Name<<": studying"<<endl;
		}

};

class teacher:public student{
	private:
		int No_of_subject;
	public:
		void capable()
		{
			if(No_of_subject>2)
			{
				cout<<Name<<": Full"<<endl;
			}
			else
				cout<<getname()<<": Available"<<endl;
		}
		teacher(string name,string schoolname,int total,int Nsubject)
			:student(name,schoolname,total)
		{
			No_of_subject = Nsubject;
		}
		void work()
		{
			cout<<Name<<": Teacing"<<endl;
		}
};

int main()
{
	student *S1 = new student("Yogesh","KVK",90);
	S1->introduceYourself();
	

	Abstract *S2 = new student("YogeshKumar","KVKBOYS",75);
	S2->result();

	teacher *T1 = new teacher("Guna","RAG",78,4);
	T1->capable();
	T1->work();

	student *S3 = T1;
	S3->work();

}
