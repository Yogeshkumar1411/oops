#include<iostream>
using namespace std;
class Instruments{
public:
	virtual void MakeSound() = 0;
};

class Accordian:public Instruments{
	public:
		void MakeSound(){
			cout<<"Accordian playing..\n";
		}
};

class Piano:public Instruments{
	public:
		void MakeSound(){
			cout<<"Piano playing...\n";
		}
};

int main()
{
	Instruments *i1 = new Accordian();	
	Instruments *i2 = new Piano();	

	Instruments* instrument[2] = {i1,i2};
	for(int i = 0;i<2;i++)
		instrument[i]->MakeSound();
}
