#include<iostream>
using namespace std;

class Instrument{
public:
 	virtual	void MakeSound()
	{
		cout<<"Instrument Playing...\n";
	}
};

class Accordian:public Instrument{
public:
	void MakeSound()
	{
		cout<<"Accordian playing...\n";
	}
};


int main()
{
	Instrument *i1 = new Accordian();
	i1->MakeSound();


}
