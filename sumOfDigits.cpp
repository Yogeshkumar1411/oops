#include<iostream>
using namespace std;
int main()
{
	int number;
	cin>>number;
	int sum = 0;
	while(number)
	{
		sum = (number%10)+sum;
		number/=10;
	}
	cout<<sum<<endl;
}
