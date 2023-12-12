#include<iostream>
using namespace std;
int main()
{
	int arr[5] = {1,8,90,2,45};
	int max = 0;
	for(int i=0;i<5;i++)
	{
		if(max<arr[i])
			max = arr[i];
	}
	cout<<max<<endl;
}
