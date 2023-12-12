#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cin>>num1;
	cin>>num2;
	cout<<"before num1 = " << num1 << "  num2 = " << num2<<endl;
	num1 = num1+num2;
	num2 = num1-num2;
	num1 = num1-num2;
	cout<<"after num1 = " << num1 << "  num2 = " << num2<<endl;
}

