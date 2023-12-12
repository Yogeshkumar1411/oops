#include<iostream>
using namespace std;
class Triangle
{
public:
	int side[3];
	
	void perimeter(int *sides){
		int perimeter=1;
		for(int i=0;i<3;i++)
			perimeter = sides[i]+perimeter;
		cout<<"Perimeter "<<perimeter<<endl;
	}

	void area(int *sides)
	{
		int area = 1;
		for(int i=0;i<3;i++)
			area = sides[i]*area;
		cout<<"Area "<<area/2<<endl;
	}
};
int main()
{
	Triangle T;
	T.side[0] = 3;
	T.side[1] = 4;
	T.side[2] = 5;
	T.perimeter(T.side);
	T.area(T.side);

}

