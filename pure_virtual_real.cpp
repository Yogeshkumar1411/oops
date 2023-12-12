#include<iostream>
using namespace std;
class smartPhone{
	public:
		virtual void TakeASelfie() = 0;
};

class Android:public smartPhone{
	public:
		void TakeASelfie(){
			cout<<"Android selfie\n";
		}
};

class IPhone:public smartPhone{
	public:
		void TakeASelfie(){
			cout<<"IPhone selfie\n";
		}
};

int main()
{
	smartPhone *s1 = new Android();
	smartPhone *s2 = new IPhone();

	smartPhone* smartphones[2] = {s1,s2};

	for(int i=0;i<2;i++)
		smartphones[i]->TakeASelfie();
}
		
